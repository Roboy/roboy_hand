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
*	Globals.cpp
*
*/

#include <FingerLib.h>

#include "Globals.h"

Finger finger[NUM_FINGERS];

// count through all the fingers and set them to open
void openHand(void)
{
  int i;
  for (i = 0; i < NUM_FINGERS; i++)
  {
    finger[i].open();
  }
}

// count through all the fingers and set them to close
void closeHand(void)
{
  int i;
  for (i = 0; i < NUM_FINGERS; i++)
  {
    finger[i].close();
  }
}

void peace_sing(void)
{
  int i;
  for (i = 0; i < NUM_FINGERS; i++)
  {
    finger[i].close();
  }
  delay(100);

  finger[1].open();
  finger[2].open();
  delay(100);

}

// the next finger starts moving when the previous finger reaches it's target position
void thumbsUp(void)
{
  const int delTime = 400;
  
  SerialUSB.println("Close all fingers");
  closeHand();
  delay(delTime);       // allow time for fingers to close

  SerialUSB.println("Wait for thumb to open");
  finger[0].open();     // set thumb to open
  delay(delTime);       // allow time for thumb to open

  SerialUSB.println("Wait 1s with thumb open");
  delay(1000);        // wait for a bit

  SerialUSB.println("Close thumb");
  finger[0].close();    // set thumb to close
  delay(delTime);       // allow time for thumb to close

}

void pinch(void)
{
  const int delTime = 400;
  const int pauseDelay = 1500;
  const int thumbPinchPos = 900;
  const int pinchSpeed = 220;
  const int normalSpeed = 255;

  
  SerialUSB.println("Close other fingers, leave thumb & index open");
  finger[2].close();                   // set middle to open
  finger[3].close();                   // set ring to open
  finger[4].close();                   // set pinky to open
  delay(delTime);                      // allow time for fingers to close
  SerialUSB.println("Fingers closed, moving thumb to position");

  finger[0].writePos(thumbPinchPos);  // move thumb into position
  delay(delTime);                     // allow time for thumb to close

  SerialUSB.println("Closing pinch");
  finger[0].writeSpeed(pinchSpeed);
  finger[1].writeSpeed(pinchSpeed);
  
  // close the pinch
  finger[0].close();
  finger[1].close();

  SerialUSB.println("Closed");

  // wait a bit
  delay(pauseDelay);

   SerialUSB.println("Opening pinch");

  // open the pinch
  finger[0].writePos(thumbPinchPos);
  finger[1].open();
  delay(delTime);                      // allow time for fingers to open

  // wait a bit
  delay(pauseDelay);

  // close the pinch
  SerialUSB.println("Closing pinch");
  finger[0].close();
  finger[1].close();

  // wait a bit
  delay(pauseDelay);
  SerialUSB.println("Closed");

  
  SerialUSB.println("Opening pinch");

  // open the pinch
  finger[0].writePos(thumbPinchPos);
  finger[1].open();
  delay(delTime);                      // allow time for fingers to open

  finger[0].writeSpeed(normalSpeed);
  finger[1].writeSpeed(normalSpeed);
}


// rolls the fingers closed and open, the next finger starts moving when the previous finger reaches it's target position
void fingerRoll(void)
{
  const int delTime = 400;
  int i;
  SerialUSB.println("Fingers rolling closed");
  //for (i = 0; i < NUM_FINGERS; i++)
  for (i = NUM_FINGERS-1; i >= 0; i--)
  {
    finger[i].close();    // set finger to close
    delay(delTime);       // allow time for fingers to close
  }
  SerialUSB.println("Fingers rolling open");
  //for (i = 0; i < NUM_FINGERS; i++)
  for (i = NUM_FINGERS-1; i >= 0; i--)
  {
    finger[i].open();     // set finger to open
    delay(delTime);       // allow time for fingers to open
  }
}
