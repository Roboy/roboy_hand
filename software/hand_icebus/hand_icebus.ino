
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
  while(!Serial){}
  SerialUSB.println("hand init");

//  pixel.begin();
//  pixel.show();

  pinAssignment();

//   // set hand to the open position and wait for it to open
//   SerialUSB.println("open hand");
//  openHand();
//  delay(1500);
//  SerialUSB.println("close hand");
//  closeHand();
//  delay(1500);

  //====== added additional uart to FPGA ===== 
  Serial.begin(9600);
  SerialUSB.println("hand ready");

  delay(1500);
}


int counter = 0;

void loop()
{ 
//  noInterrupts();
  while(Serial.available()){
      icebus.receive(Serial.read());
  }
//  interrupts();

  icebus.frameMatch();

  if((counter++)%10000==0){
    SerialUSB.println(counter);
  }

}
