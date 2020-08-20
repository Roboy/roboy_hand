
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
#include "Adafruit_NeoPixel.h"
#include "Grips.h"
#include "IcebusProtocol.hpp"

Adafruit_NeoPixel pixel = Adafruit_NeoPixel(1, 2, NEO_GRB + NEO_KHZ800);

Icebus icebus;

void setup()
{
  delay(1500);
  // SerialUSB.print is used to allow compatability between both the Mega (Serial.print) 
  // and the Zero Native Port (SerialUSB.print), and is defined in FingerLib.h
  SerialUSB.begin(115200);
//  while(!Serial){}
  SerialUSB.println("hand init");

//  pixel.begin();
//  pixel.show();

  pinAssignment();

   // set hand to the open position and wait for it to open
   SerialUSB.println("open hand");
  openHand();
  delay(2000);
  SerialUSB.println("close hand");
  closeHand();

  //====== added additional uart to FPGA ===== 
  Serial.begin(19200);
  SerialUSB.println("hand ready");

  pinMode(13,OUTPUT);

  delay(1500);
}


bool toggle = false;
int commands_received_prev = 0;

void loop()
{ 
  while(Serial.available()){
      icebus.receive(Serial.read());
  }

  if((icebus.commands_received)%100==0 && commands_received_prev!=icebus.commands_received){
    SerialUSB.print("hand commands received: ");
    SerialUSB.println(icebus.commands_received);
    commands_received_prev=icebus.commands_received;
  }

}
