#define SERIAL SerialUSB
#define PRINTOUTS

#pragma pack(1)
/*
 * The width of the CRC calculation and result.
 * Modify the typedef for a 16 or 32-bit CRC standard.
 */
#include <Arduino.h>
#include <stdio.h>
#include "Globals.h"

// uncomment one of the following to select the board
//#define ALMOND_BOARD
#define CHESTNUT_BOARD

#define NUM_FINGERS 4
int handFlag = RIGHT;

#define MAX_FRAME_LENGTH 28
#define HEADER_LENGTH 4
typedef uint16_t crc;

#define WIDTH  (8 * sizeof(crc))
#define TOPBIT (1 << (WIDTH - 1))
#define POLYNOMIAL 0x8005

uint8_t control_mode[4] = {0,0,0,0};
uint16_t setpoint[4] = {0,0,0,0};

union HandStatusRequest{
  struct __attribute__((packed)) {
        uint32_t header;
        uint8_t id;
        uint16_t crc;
    }values = {.header = 0xBBCEE11C};
    uint8_t data[7];
};

union HandCommand{
  struct __attribute__((packed)) {
        uint32_t header;
        uint8_t id;
        uint16_t setpoint0;
        uint16_t setpoint1;
        uint16_t setpoint2;
        uint16_t setpoint3;
        uint16_t crc;
    }values = {.header = 0x0DF005B1};
    uint8_t data[15];
};

union HandControlMode{
  struct __attribute__((packed)) {
        uint32_t header;
        uint8_t id;
        uint8_t control_mode;
        uint16_t crc;
    }values = {.header= 0xB5006BB1 };
    uint8_t data[8];
};

union HandStatusResponse{
  struct __attribute__((packed)) {
        uint32_t header;
        uint8_t id;
        uint8_t control_mode;
        uint16_t setpoint0;
        uint16_t setpoint1;
        uint16_t setpoint2;
        uint16_t setpoint3;
        uint16_t position0;
        uint16_t position1;
        uint16_t position2;
        uint16_t position3;
        uint16_t current0;
        uint16_t current1;
        uint16_t current2;
        uint16_t current3;
        uint16_t crc;
    }values = {.header = 0x35B100B0 };
    uint8_t data[32];
};

struct Frame{
  union{
    uint8_t bytes[4];
    int32_t val;
  }header;
  uint length;
  uint8_t data[MAX_FRAME_LENGTH];
  uint frame_index = 0;
  bool active = false, dirty = false;
  int type;
  int counter = 0;
};

class Icebus{
public:
  Icebus(){
    frames[0].type = 0;
    frames[0].header.val = 0xBBCEE11C;
    frames[0].length = 7;

    frames[1].type = 1;
    frames[1].header.val = 0x0DF005B1;
    frames[1].length = 15;

    frames[2].type = 2;
    frames[2].header.val = 0xB5006BB1;
    frames[2].length = 8;

    crcInit();
  }

  void receive(uint8_t val){
    for(int i=0;i<3;i++){
      if(!frames[i].active){
        if(val==frames[i].header.bytes[frames[i].frame_index]){
//           SERIAL.print(val,HEX);
//           SERIAL.print(" matches byte number ");
//           SERIAL.println(frames[i].frame_index);
          frames[i].frame_index++;
          if(frames[i].frame_index==4){
            frames[i].active = true;
//             SERIAL.print(frames[i].type);
//             SERIAL.println(" frame matched");
            digitalWrite(13,true); // drive enable
          }
        }else{
          frames[i].frame_index = 0;
        }
      }else{
        if(frames[i].frame_index<frames[i].length-1){
          frames[i].data[frames[i].frame_index] = val;
          frames[i].frame_index++;
        }else{  
          frames[i].data[frames[i].frame_index] = val;
          frames[i].counter++;
          frames[i].active = false;
          frames[i].dirty = true;
          frames[i].frame_index = 0;
          
          frameMatch();
          delay(2);
          digitalWrite(13,false); // drive disable
        }
      }
    }
  }

  void frameMatch(){
    for(int i=0;i<3;i++){
      if(frames[i].dirty){
        if(frames[i].data[4]==ID){
          crc crc_received = gen_crc16(&frames[i].data[HEADER_LENGTH],frames[i].length-HEADER_LENGTH-2);
          if(crc_received==(frames[i].data[frames[i].length-1]<<8|frames[i].data[frames[i].length-2])){
            switch(frames[i].type){
              case 0: { // status_request
                  #ifdef PRINTOUTS
                  SERIAL.print(frames[i].counter);
                  SERIAL.print("\tstatus_request received for id ");
                  SERIAL.println(frames[i].data[4]);
                  #endif
                  HandStatusResponse msg;
                  msg.values.header = 0x35B100B0;
                  msg.values.id = ID;
                  msg.values.control_mode = ((control_mode[0]<<6)|(control_mode[1]<<4)|(control_mode[2]<<2)|control_mode[3]);
                  msg.values.setpoint0 = setpoint[0];
                  msg.values.setpoint1 = setpoint[1];
                  msg.values.setpoint2 = setpoint[2];
                  msg.values.setpoint3 = setpoint[3];
                  msg.values.position0 = finger[0].readPos();
                  msg.values.position1 = finger[1].readPos();
                  msg.values.position2 = finger[2].readPos();
                  msg.values.position3 = finger[3].readPos();
                  msg.values.current0 = finger[0].readCurrent();
                  msg.values.current1 = finger[1].readCurrent();
                  msg.values.current2 = finger[2].readCurrent();
                  msg.values.current3 = finger[3].readCurrent();
                  msg.values.crc = gen_crc16(&msg.data[4],sizeof(msg)-HEADER_LENGTH-2);
                  Serial.write(msg.data,sizeof(msg));
                break;
              }
              case 1: { // hand_command
                HandCommand msg;
                memcpy(msg.data,frames[i].data,frames[i].length);
                setpoint[0] = msg.values.setpoint0;
                setpoint[1] = msg.values.setpoint1;
                setpoint[2] = msg.values.setpoint2;
                setpoint[3] = msg.values.setpoint3;
                finger[0].writePos(setpoint[0]);
                finger[1].writePos(setpoint[1]);
                finger[2].writePos(setpoint[2]);
                finger[3].writePos(setpoint[3]);
                #ifdef PRINTOUTS
                SERIAL.print(frames[i].counter);
                SERIAL.print("\thand_command received for id ");
                SERIAL.print(frames[i].data[4]);
                SERIAL.print("\tsetpoints ");
                SERIAL.print(msg.values.setpoint0);SERIAL.print("\t");
                SERIAL.print(msg.values.setpoint1);SERIAL.print("\t");
                SERIAL.print(msg.values.setpoint2);SERIAL.print("\t");
                SERIAL.print(msg.values.setpoint3);SERIAL.println();
                #endif

                break;
              }
              case 2: { // hand_control_mode
                HandControlMode msg;
                memcpy(msg.data,frames[i].data,frames[i].length);
                control_mode[0] = (msg.values.control_mode>>6)&0x3;
                control_mode[1] = (msg.values.control_mode>>4)&0x3;
                control_mode[2] = (msg.values.control_mode>>2)&0x3;
                control_mode[3] = (msg.values.control_mode&0x3);
                #ifdef PRINTOUTS
                SERIAL.print(frames[i].counter);
                SERIAL.print("\thand_control_mode received for id ");
                SERIAL.println(frames[i].data[4]);
                SERIAL.print("\tcontrol_mode ");
                SERIAL.print((msg.values.control_mode>>6)&0x3);SERIAL.print("\t");
                SERIAL.print((msg.values.control_mode>>4)&0x3);SERIAL.print("\t");
                SERIAL.print((msg.values.control_mode>>2)&0x3);SERIAL.print("\t");
                SERIAL.print((msg.values.control_mode)&0x3);SERIAL.println();
                #endif
                break;
              }
            }
          }else{
            #ifdef PRINTOUTS
            SERIAL.print("crc error, calculated ");
            SERIAL.print(crc_received,HEX);
            SERIAL.print("\t received ");
            SERIAL.println((frames[i].data[frames[i].length-1]<<8|frames[i].data[frames[i].length-2]),HEX);
//            SERIAL.print(" received ");
//            SERIAL.print(frames[i].counter);
            #endif
          }
        }
//        #ifdef PRINTOUTS
//        else{
//          SERIAL.print("not for me, it's for ");
//          SERIAL.println(frames[i].data[4]);
//        }
//        #endif
        frames[i].dirty = false;
      }
    }
  }

private:
  uint8_t ID = 134;
  Frame frames[3];
  uint write_index = 0;
  uint read_index = 0;
  crc  crcTable[256];
  void crcInit(){
    crc  remainder;
    for (int dividend = 0; dividend < 256; ++dividend){
        remainder = dividend << (WIDTH - 8);
        for (uint8_t bit = 8; bit > 0; --bit){
            if (remainder & TOPBIT){
                remainder = (remainder << 1) ^ POLYNOMIAL;
            }else{
                remainder = (remainder << 1);
            }
        }
        crcTable[dividend] = remainder;
    }
  }
  crc gen_crc16(const uint8_t *message, uint16_t nBytes){
    uint8_t data;
    crc remainder = 0xffff;
    for (int byte = 0; byte < nBytes; ++byte)
    {
        data = message[byte] ^ (remainder >> (WIDTH - 8));
        remainder = crcTable[data] ^ (remainder << 8);
    }
    return (remainder<<8|remainder>>8);
  }
};
