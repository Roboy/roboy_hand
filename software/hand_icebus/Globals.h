/*	Open Bionics - Beetroot
*	Author - Olly McBride
*	Date - October 2016
*
*	This work is licensed under the Creative Commons Attribution-ShareAlike 4.0 International License.
*	To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/.
*
*	Website - http://www.openbionics.com/
*	GitHub - https://github.com/Open-Bionics
*	Email - ollymcbride@openbionics.com
*
*	Globals.h
*
*/

#ifndef GLOBALS_H_
#define GLOBALS_H_

#include <Arduino.h>
#include <FingerLib.h>

///////////////////////////////////// BRUNEL VERSION ////////////////////////////////////////
//#define BRUNEL_VER		1		// original Brunel version, larger hand, elastic fingers
#define BRUNEL_VER			2		// newer Brunel version, smaller/lighter hand, spring fingers


///////////////////////////////////// SERIAL SETTINGS ///////////////////////////////////////
// uncomment one of the following to select which Serial interface is to be used to control the hand
#define SERIAL_USB_CONTROL      	// SerialUSB	(default)
//#define SERIAL_PINS_CONTROL		// SerialPins
//#define SERIAL_JACK_CONTROL		// SerialJack

#define SERIAL_BAUD_RATE	115200	// baud	(38400 recommended for CSV mode)

#define SERIALNONBLOCKCHECK      (1)

#define  FORCE_INLINE __attribute__((always_inline)) inline
FORCE_INLINE void serialprintPGM(const char *str)
{
  char ch = pgm_read_byte(str);
  while (ch)
  {
    Serial.write(ch);
    ch = pgm_read_byte(++str);
  }
}

#define  FORCE_INLINE __attribute__((always_inline)) inline
FORCE_INLINE void USBserialprintPGM(const char *str)
{
  char ch = pgm_read_byte(str);
  while (ch)
  {
    SerialUSB.write(ch);
    ch = pgm_read_byte(++str);
  }
}

#define MYSERIAL_PRINT(x)\
  if( SERIALNONBLOCKCHECK )\
  {\
    Serial.print(x);\
  }
#define MYSERIAL_PRINT_F(x,y)\
  if( SERIALNONBLOCKCHECK )\
  {\
    Serial.print(x,y);\
  }
#define MYSERIAL_PRINTLN(x) \
  if( SERIALNONBLOCKCHECK )\
  {\
    Serial.print(x);\
    Serial.write('\n');\
  }
#define USBSERIAL_PRINTLN(x)\
  SerialUSB.write(x);

#define MYSERIAL_PRINT_PGM(x) serialprintPGM(PSTR(x));
#define MYSERIAL_PRINTLN_PGM(x) do{serialprintPGM(PSTR(x));serialprintPGM("\n");} while(0)

#define USBSERIAL_PRINT_PGM(x) USBserialprintPGM(PSTR(x));
#define USBSERIAL_PRINTLN_PGM(x) do{USBserialprintPGM(PSTR(x));USBserialprintPGM("\n");} while(0)

#define MYSERIAL_BEGIN(reate) Serial.begin(rate)
#define MYSERIAL_AVAILABLE() Serial.available()
#define MYSERIAL_READ() Serial.read()

///////////////////////////////////// BETA MODES ///////////////////////////////////////////
// uncomment the following to enable ROS control (beta)
//#define USE_ROS

///////////////////////////////////// BOOLEANS //////////////////////////////////////////////
#define OFF		0
#define ON		1

///////////////////////////////////// MACROS ///////////////////////////////////////
#define IS_BETWEEN(x,a,b)	(((((x)>=(a))&&((x)<=(b)))||(((x)>=(b))&&((x)<=(a))))?(1):(0))		// check if value x is equal to or between values a and b

////////////////////////////////////// TEMP SETTINGS ////////////////////////////////////////
#define CPU_TEMP_WARNING	45.0	// �C
#define CPU_TEMP_MAX		50.0	// �C			

///////////////////////////////////// FINGER SETTINGS ///////////////////////////////////////
#define NUM_FINGERS			4		// actuated fingers

extern Finger finger[NUM_FINGERS];

///////////////////////////////////// FIRMWARE VERSION ///////////////////////////////////////
#define FW_VER_MAJ			1
#define FW_VER_MIN			1
#define FW_VER_PAT			0


////////////////////////////////////
void openHand(void);
void closeHand(void);
void pinch(void);
void fingerRoll(void);
void thumbsUp(void);
void peace_sing(void);


#endif // GLOBALS_H_
