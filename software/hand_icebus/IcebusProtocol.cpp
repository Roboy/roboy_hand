#include "IcebusProtocol.hpp"

IcebusHost::IcebusHost(){

  crcInit();
}

void IcebusHost::SendStatusRequest(int id){
  StatusRequest msg;
  msg.values.header = 0xBBCEE11C;
  msg.values.id = id;
  msg.values.crc = gen_crc16(&msg.data[4],sizeof(msg)-4-2);
//  SerialUSB.print("status request------------>\t");
//  for(int i=0;i<sizeof(msg);i++){
//      SerialUSB.print(msg.data[i],HEX);
//      SerialUSB.print("\t");
//  }
  SerialUSB.println();
  Serial.write(msg.data, sizeof(msg));
}

void IcebusHost::SendCommand(int id){
  Command msg;
  msg.values.header = 0xD0D0D0D0;
  msg.values.id = id;
  msg.values.setpoint = 10;
  msg.values.crc = gen_crc16(&msg.data[4],sizeof(msg)-4-2);
  SerialUSB.print("command------------>\t");
//  for(int i=0;i<sizeof(msg);i++){
//      SerialUSB.print(msg.data[i],HEX);
//      SerialUSB.print("\t");
//  }
  SerialUSB.println();
  Serial.write(msg.data, sizeof(msg));
}

void IcebusHost::SendControlMode(int id){
  ControlMode msg;
  msg.values.header = 0x55AAADBA;
  msg.values.id = id;
  msg.values.control_mode = 1;
  msg.values.Kp = 0;
  msg.values.Ki = 1;
  msg.values.Kd = 2;
  msg.values.PWMLimit = 500;
  msg.values.IntegralLimit = 50;
  msg.values.deadband = 1;
  msg.values.setpoint = 1;
  msg.values.current_limit = 80;
  msg.values.crc = gen_crc16(&msg.data[4],sizeof(msg)-4-2);
  SerialUSB.print("control_mode------------>\t");
//  for(int i=0;i<sizeof(msg);i++){
//      SerialUSB.print(msg.data[i],HEX);
//      SerialUSB.print("\t");
//  }
  SerialUSB.println();
  Serial.write(msg.data, sizeof(msg));
}

void IcebusHost::SendStatusResponse(int id){
  StatusResponse msg;
  msg.values.header = 0xDA00EB1C;
  msg.values.id = id;
  msg.values.control_mode = 1;
  msg.values.encoder_position0 = 0;
  msg.values.encoder_position1 = 1;
  msg.values.setpoint = 2;
  msg.values.duty = 500;
  msg.values.displacement = 50;
  msg.values.current = 1;
  msg.values.setpoint = 1;
  msg.values.neopixel_color = 80;
  msg.values.crc = gen_crc16(&msg.data[4],sizeof(msg)-4-2);
  SerialUSB.print("status_response------------>\t");
//  for(int i=0;i<sizeof(msg);i++){
//      SerialUSB.print(msg.data[i],HEX);
//      SerialUSB.print("\t");
//  }
  SerialUSB.println();
  Serial.write(msg.data, sizeof(msg));
}

void IcebusHost::SendHandStatusRequest(int id){
  HandStatusRequest msg;
  msg.values.header = 0xBEBAADAB;
  msg.values.id = id;
  msg.values.crc = gen_crc16(&msg.data[4],sizeof(msg)-4-2);
  SerialUSB.print("status_request------------>\t");
//  for(int i=0;i<sizeof(msg);i++){
//      SerialUSB.print(msg.data[i],HEX);
//      SerialUSB.print("\t");
//  }
  SerialUSB.println();
  Serial.write(msg.data, sizeof(msg));
}

void IcebusHost::SendHandCommand(int id){
  HandCommand msg;
  msg.values.header = 0x0DF005B1;
  msg.values.id = id;
  msg.values.setpoint0 = 10;
  msg.values.setpoint1 = 10;
  msg.values.setpoint2 = 10;
  msg.values.setpoint3 = 10;
  msg.values.neopxl_color = 10;
  msg.values.crc = gen_crc16(&msg.data[4],sizeof(msg)-4-2);
  SerialUSB.print("hand_command------------>\t");
//  for(int i=0;i<sizeof(msg);i++){
//      SerialUSB.print(msg.data[i],HEX);
//      SerialUSB.print("\t");
//  }
  SerialUSB.println();
  Serial.write(msg.data, sizeof(msg));
}

void IcebusHost::SendHandControlMode(int id){
  HandControlMode msg;
  msg.values.header = 0xB5006BB1;
  msg.values.id = id;
  msg.values.control_mode = 1;
  msg.values.crc = gen_crc16(&msg.data[4],sizeof(msg)-4-2);
  SerialUSB.print("hand_control_mode------------>\t");
//  for(int i=0;i<sizeof(msg);i++){
//      SerialUSB.print(msg.data[i],HEX);
//      SerialUSB.print("\t");
//  }
  SerialUSB.println();
  Serial.write(msg.data, sizeof(msg));
}

void IcebusHost::SendHandStatusResponse(int id){
  HandStatusResponse msg;
  msg.values.header = 0x35B1000B;
  msg.values.id = id;
  msg.values.control_mode = (control_mode[0]<<24|control_mode[1]<<16|control_mode[2]<<8|control_mode[3]);
  msg.values.position = (pos[0]<<24|pos[1]<<16|pos[2]<<8|pos[3]);
  msg.values.current0 = current[0];
  msg.values.current1 = current[1];
  msg.values.current2 = current[2];
  msg.values.current3 = current[3];
  msg.values.setpoint = (setpoint[0]<<24|setpoint[1]<<16|setpoint[2]<<8|setpoint[3]);
  msg.values.neopixel_color = neopixel_color;
  msg.values.crc = gen_crc16(&msg.data[4],sizeof(msg)-4-2);
  SerialUSB.print("hand_status_response------------>\t");
//  for(int i=0;i<sizeof(msg);i++){
//      SerialUSB.print(msg.data[i],HEX);
//      SerialUSB.print("\t");
//  }
  SerialUSB.println();
  Serial.write(msg.data, sizeof(msg));
}

int IcebusHost::Listen(int id){
  int n=Serial.available();
  if(n>=7){
    uint8_t read_buf [256];
    memset(&read_buf, '\0', sizeof(read_buf));
    for(int i=0;i<n;i++){
      read_buf[i] = Serial.read();
    }
    SerialUSB.print(n);
    SerialUSB.print(" bytes received\n");
    for(int i=0;i<n;i++){
        SerialUSB.print(read_buf[i],HEX);
        SerialUSB.print("\t");
    }
    SerialUSB.println();
    uint32_t header = (read_buf[0]<<24|read_buf[1]<<16|read_buf[2]<<8|read_buf[3]);
    crc crc_received = gen_crc16(&read_buf[4],n-4-2);
    if(crc_received==(read_buf[n-1]<<8|read_buf[n-2])){
      switch(header){
        case 0x1CE1CEBB: {
          SerialUSB.print("status_request received for id ");
          SerialUSB.println(read_buf[4]);
          SendStatusResponse(id);
          break;
        }
        case 0xD0D0D0D0: {
          SerialUSB.print("command received for id ");
          SerialUSB.println(read_buf[4]);
          break;
        }
        case 0xBAADAA55: {
          SerialUSB.print("control_mode received for id ");
          SerialUSB.println(read_buf[4]);
          break;
        }
        case 0x1CEB00DA: {
          SerialUSB.print("status_response received for id ");
          SerialUSB.println(read_buf[4]);
          break;
        }
        case 0xABADBABE: {
          SerialUSB.print("hand_status_request received for id ");
          SerialUSB.println(read_buf[4]);
          SendHandStatusResponse(128);
          break;
        }
        case 0xB105F00D: {
          SerialUSB.print("hand_command received for id ");
          SerialUSB.println(read_buf[4]);
          HandCommand msg;
          memcpy(read_buf, msg.data, sizeof(msg));
          setpoint[0] = msg.values.setpoint0;
          setpoint[1] = msg.values.setpoint1;
          setpoint[2] = msg.values.setpoint2;
          setpoint[3] = msg.values.setpoint3;
          neopixel_color = msg.values.neopxl_color;
          break;
        }
        case 0xB16B00B5: {
          SerialUSB.print("hand_control_mode received for id ");
          SerialUSB.println(read_buf[4]);
          break;
        }
        case 0x0B00B135: {
          SerialUSB.print("hand_status_response received for id ");
          SerialUSB.println(read_buf[4]);
          break;
        }
        default: printf("header %x does not match",header);
      }
    }else{
      printf("crc doesn't match, crc received %x, crc calculated %x, header %x", (read_buf[7]<<8|read_buf[6]),crc_received,header);
    }
    return header;
  }
}

void IcebusHost::crcInit(void){
    crc  remainder;
    /*
     * Compute the remainder of each possible dividend.
     */
    for (int dividend = 0; dividend < 256; ++dividend)
    {
        /*
         * Start with the dividend followed by zeros.
         */
        remainder = dividend << (WIDTH - 8);

        /*
         * Perform modulo-2 division, a bit at a time.
         */
        for (uint8_t bit = 8; bit > 0; --bit)
        {
            /*
             * Try to divide the current data bit.
             */
            if (remainder & TOPBIT)
            {
                remainder = (remainder << 1) ^ POLYNOMIAL;
            }
            else
            {
                remainder = (remainder << 1);
            }
        }

        /*
         * Store the result into the table.
         */
        crcTable[dividend] = remainder;
    }

}   /* crcInit() */

crc IcebusHost::gen_crc16(const uint8_t *message, uint16_t nBytes)
{
    uint8_t data;
    crc remainder = 0xffff;


    /*
     * Divide the message by the polynomial, a byte at a time.
     */
    for (int byte = 0; byte < nBytes; ++byte)
    {
        data = message[byte] ^ (remainder >> (WIDTH - 8));
        remainder = crcTable[data] ^ (remainder << 8);
    }

    /*
     * The final remainder is the CRC.
     */
    return (remainder<<8|remainder>>8);

}   /* crcFast() */
