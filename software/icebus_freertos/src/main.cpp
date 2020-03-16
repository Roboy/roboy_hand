#include <FreeRTOS_SAMD21.h> //samd21

#define SERIAL          SerialUSB

//**************************************************************************
// global variables
//**************************************************************************
TaskHandle_t serial_data_task_handle;
TaskHandle_t frame_matcher_task_handle;

#define MAX_FRAME_LENGTH 28
#define HEADER_LENGTH 4
typedef uint16_t crc;

#define WIDTH  (8 * sizeof(crc))
#define TOPBIT (1 << (WIDTH - 1))
#define POLYNOMIAL 0x8005

union HandStatusRequest{
  struct __attribute__((packed)) {
        uint32_t header;
        uint8_t id;
        uint16_t crc;
    }values = {.header = 0xBEBAADAB};
    uint8_t data[7];
};

union HandCommand{
  struct __attribute__((packed)) {
        uint32_t header;
        uint8_t id;
        uint8_t setpoint0;
        uint8_t setpoint1;
        uint8_t setpoint2;
        uint8_t setpoint3;
        uint32_t neopxl_color:24;
        uint16_t crc;
    }values = {.header = 0x0DF005B1};
    uint8_t data[14];
};

union HandControlMode{
  struct __attribute__((packed)) {
        uint32_t header;
        uint8_t id;
        uint32_t control_mode;
        uint16_t crc;
    }values = {.header= 0xB5006BB1 };
    uint8_t data[11];
};

union HandStatusResponse{
  struct __attribute__((packed)) {
        uint32_t header;
        uint8_t id;
        uint32_t control_mode;
        uint32_t setpoint;
        uint32_t position;
        uint16_t current0;
        uint16_t current1;
        uint16_t current2;
        uint16_t current3;
        int32_t neopixel_color:24;
        uint16_t crc;
    }values = {.header = 0x35B1000B };
    uint8_t data[26];
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
  String type;
  int counter = 0;
};

class Icebus{
public:
  Icebus(){
    frames[0].type = "status_request";
    frames[0].header.val = 0xBEBAADAB;
    frames[0].length = 7;

    frames[1].type = "hand_command";
    frames[1].header.val = 0x0DF005B1;
    frames[1].length = 14;

    frames[2].type = "hand_control_mode";
    frames[2].header.val = 0xB5006BB1;
    frames[2].length = 11;

    crcInit();
  }

  void receive(uint8_t val){
    for(int i=0;i<3;i++){
      if(!frames[i].active){
        if(val==frames[i].header.bytes[frames[i].frame_index]){
          // SERIAL.print(val,HEX);
          // SERIAL.print(" matches byte number ");
          // SERIAL.println(frames[i].frame_index);
          frames[i].frame_index++;
          if(frames[i].frame_index==4){
            frames[i].active = true;
            // SERIAL.print(frames[i].type);
            // SERIAL.println(" frame matched");
          }
        }else{
          frames[i].frame_index = 0;
        }
      }else{
        if(frames[i].frame_index<frames[i].length){
          frames[i].data[frames[i].frame_index] = val;
          frames[i].frame_index++;
        }else{
          frames[i].counter++;
          frames[i].active = false;
          frames[i].dirty = true;
          frames[i].frame_index = 0;
        }
      }
    }
  }

  bool frameMatch(){
    for(int i=0;i<3;i++){
      if(frames[i].dirty){
        crc crc_received = gen_crc16(&frames[i].data[HEADER_LENGTH],frames[i].length-HEADER_LENGTH-2);
        if(crc_received==(frames[i].data[frames[i].length-1]<<8|frames[i].data[frames[i].length-2])){
          SERIAL.print(frames[i].type);
          SERIAL.print(" received ");
          SERIAL.println(frames[i].counter);
        }else{
          SERIAL.print(frames[i].type);
          SERIAL.print(" received ");
          SERIAL.print(frames[i].counter);
          SERIAL.print(" but crc does not match");
        }
        frames[i].dirty = false;
      }
    }
  }

private:
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

Icebus icebus;

static void serial_data_task( void *pvParameters ){
  SERIAL.println("serial_data_task started");
  int n;
  while(true){
    n = Serial.available();
    if(n>0){
      for(int i=0;i<n;i++){
        icebus.receive(Serial.read());
      }
      // SERIAL.print(n);
      // SERIAL.println(" bytes received");
    }
    vTaskDelay( 10 / portTICK_PERIOD_US );
  }
  vTaskDelete( NULL );
}

static void frame_matcher_task( void *pvParameters ) {
  SERIAL.println("frame_matcher_task started");
  while(true){
    icebus.frameMatch();
    vTaskDelay( 1000 / portTICK_PERIOD_US );
  }
  vTaskDelete( NULL );
}

void setup()
{
  Serial.begin(115200);
  SERIAL.begin(115200);

  vNopDelayMS(1000); // prevents usb driver crash on startup, do not omit this
  while (!SERIAL) ;  // Wait for serial terminal to open port before starting program

  SERIAL.println("");
  SERIAL.println("******************************");
  SERIAL.println("        hand start         ");
  SERIAL.println("******************************");

  // Create the threads that will be managed by the rtos
  // Sets the stack size and priority of each task
  // Also initializes a handler pointer to each task, which are important to communicate with and retrieve info from tasks
  xTaskCreate(serial_data_task,     "serial_data_task",       256, NULL, tskIDLE_PRIORITY + 1, &serial_data_task_handle);
  xTaskCreate(frame_matcher_task,     "frame_matcher_task",       256, NULL, tskIDLE_PRIORITY + 2, &frame_matcher_task_handle);

  // Start the RTOS, this function will never return and will schedule the tasks.
	vTaskStartScheduler();

}

//*****************************************************************
// This is now the rtos idle loop
// No rtos blocking functions allowed!
//*****************************************************************
void loop()
{
    // Optional commands, can comment/uncomment below
    //SERIAL.print("."); //print out dots in terminal, we only do this when the RTOS is in the idle state
    vNopDelayMS(100);
}


//*****************************************************************
