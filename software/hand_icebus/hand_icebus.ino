
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

/*
 * WHAT IT DOES
 * Runs through a demo sequence using FingerLib.h to control the fingers
 * 
 */

// uncomment one of the following to select the board
//#define ALMOND_BOARD
#define CHESTNUT_BOARD

#define MYSERIAL SerialUSB
#define NUM_FINGERS 4

// uncomment one of the following to select which hand is used
//int handFlag = LEFT;
int handFlag = RIGHT;

// initialise Finger class to array
//Finger finger[NUM_FINGERS];

//LED_CLASS neoP = LED_CLASS();

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


  //====== added additional uart to FPGA ===== 
  Serial.begin(115200);
  SerialUSB.println("hand ready");

  delay(1500);
}

void loop()
{ 
  icebus.Listen(128);
  //SerialUSB.println("Started");
  //LED.setMode(LED_MODE_SOLID);
  //LED.setBrightness(10);
  //LED.setColour(255,0,0);
//  pixel.setPixelColor(0, pixel.Color(0, 0, 0));
//  pixel.show();
//
//   for (int i = 0; i < NUM_FINGERS; i++){
//      SerialUSB.print("F");
//      SerialUSB.print(i);
//      SerialUSB.print(" ");
//      SerialUSB.print(finger[i].readPos());
//      SerialUSB.print("\n");
//   }
//  
//  pollSerial();
//  
//  delay(100);
//
//  //closeHand();
//
//  pixel.setPixelColor(0, pixel.Color(0, 0, 0));
//  pixel.show();
//  delay(100);
  //openHand();
}


  /*
  while (Serial.available()) {
    char rec_data_buffer[10];
    char *rec_data = rec_data_buffer;
    rec_data = Serial.read();
    //Serial.print(rec_data);
    //switch(rec_data){
    //  case "g0"
    //}
  }*/
  
  /*closeHand
  //neoP.setMode(LED_MODE_SOLID);
  SerialUSB.println("Finger Roll");
  fingerRoll();
  fingerRoll();
  delay(1000);

  //LED.setBrightness(100);
  //LED.setColour(0,255,0);

  SerialUSB.println("Thumbs Up");
  thumbsUp();
  thumbsUp();
  delay(1000);

  SerialUSB.println("Open");
  openHand();
  delay(1000);

  SerialUSB.println("Pinch");
  pinch();
  pinch();
  delay(1000);*/
