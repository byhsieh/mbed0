#include "mbed.h"


void Led_red(DigitalOut& ledpin_red)

{

   for(int i=0; i<6; ++i) { //blink for 6 times

       ledpin_red = !ledpin_red; // toggle led

       wait(0.2f);

   }

}

void Led_green(DigitalOut& ledpin_green)

{

   for(int i=0; i<4; ++i) { //blink for 4 times

       ledpin_green = !ledpin_green; // toggle led

       wait(0.2f);

   }

}