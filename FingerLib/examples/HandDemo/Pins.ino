// attach the pins to the finger instances
void pinAssignment(void)
{
  if (handFlag == RIGHT)
  {
#if defined(ALMOND_BOARD)
    finger[0].attach(13, 4, A5);     // Right motor connector
    finger[1].attach(3, 6, A1);
    finger[2].attach(7, 8, A2);
    finger[3].attach(10, 9, A3);
    finger[4].attach(11, 12, A4);
#elif defined(CHESTNUT_BOARD)
    /*finger[0].attach(4, 8, A2, A8, false);    // attach the thumb
    finger[1].attach(1, 2, A0, A6, true);   // attach the index (finger is inverted)
    finger[2].attach(7, 5, A1, A9, true);   // attach the middle (finger is inverted)
    finger[3].attach(0, 9, A3, A7, true);   // attach the ring & pinky (fingers are inverted)
    */
    finger[0].attach(10, 11, A1, A9, false); // attach the thumb
    finger[3].attach(4, 3, A0, 1, true); // attach the ring & pinky (fingers are inverted)
    finger[1].attach(9, 6, A3, 0, true); // attach the index (finger is inverted)
    finger[2].attach(5, 12, A2, A5, true); //doesn't move (could be wronge pin
    

#else
#error 'No board selected'
#endif
  }
  else if (handFlag == LEFT)
  {
#if defined(ALMOND_BOARD)
    /*finger[0].attach(5, 2, A0);     // Left motor connector
    finger[1].attach(11, 12, A4);
    finger[2].attach(10, 9, A3);
    finger[3].attach(7, 8, A2);
    finger[4].attach(3, 6, A1);*/
#elif defined(CHESTNUT_BOARD)
 /*   finger[0].attach(7, 5, A1, A9, false);    // attach the thumb
    finger[1].attach(0, 9, A3, A7, true);   // attach the index (finger is inverted)
    finger[2].attach(4, 8, A2, A8, true);   // attach the middle (finger is inverted)
    finger[3].attach(1, 2, A0, A6, true);   // attach the ring & pinky (fingers are inverted)*/
#else
#error 'No board selected'
#endif
  }
}
