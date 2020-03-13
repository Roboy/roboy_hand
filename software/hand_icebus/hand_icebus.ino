
/*  Open Bionics - FingerLib Example - HandDemo
* Author - Olly McBride
* Date - October 2015
*
* This work is licensed under the Creative Commons Attribution-ShareAlike 4.0 International License.
* To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/.
* 
* Website - http://www.openbionics.com/
* GitHub - https://github.com/Open-Bionics
*/

#include "Globals.h"
#include <FingerLib.h>
#include "Adafruit_NeoPixel.h"
#include "Grips.h"
#include "IcebusProtocol.hpp"

// uncomment one of the following to select the board
//#define ALMOND_BOARD
#define CHESTNUT_BOARD

#define MYSERIAL SerialUSB
#define NUM_FINGERS 4
int handFlag = RIGHT;

Adafruit_NeoPixel pixel = Adafruit_NeoPixel(1, 2, NEO_GRB + NEO_KHZ800);

IcebusHost icebus;

void setup()
{
  delay(1500);
  // SerialUSB.print is used to allow compatability between both the Mega (Serial.print) 
  // and the Zero Native Port (SerialUSB.print), and is defined in FingerLib.h
  SerialUSB.begin(115200);
  SerialUSB.println("hand init");

  // set hand to the open position and wait for it to open
  //openHand();
  delay(1500);

  pixel.begin();
  pixel.show();

  pinAssignment();

  //====== added additional uart to FPGA ===== 
  Serial.begin(115200);
  SerialUSB.println("hand ready");

  delay(1500);
}

void loop()
{ 
  uint32_t header = icebus.Listen(128);
  switch(header){
    case 0xABADBABE: { // hand_status_request
      for(int i=0;i<NUM_FINGERS;i++){
        icebus.pos[i] = finger[i].readPos();
        icebus.current[i] = finger[i].readCurrent();
      }
      icebus.SendHandStatusResponse(128);
      break;
    }
    case 0xB105F00D: { // hand_command
      for(int i=0;i<NUM_FINGERS;i++){
        finger[i].writePos(icebus.setpoint[i]);
      }
      pixel.setPixelColor(0, pixel.Color((icebus.neopixel_color>>16)&0xff, (icebus.neopixel_color>>8)&0xff, icebus.neopixel_color&0xff));
      pixel.show();
      break;
    }
    case 0xB16B00B5: { //hand_control_mode
     
      break;
    }
    case 0x0B00B135: { //hand_status_response

      break;
    }
    default: printf("header %x does not match",header);
  }
}
