/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"




int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led(PTB22);       // RED LED
    DigitalOut led1(PTE26);      // GREEN LED
    DigitalOut led2(PTB21);      // BLUE LED

    led=led1=led2=1;            // shut off all leds

    while (true) 
    {
        led = 0;       // turn ON RED led
        ThisThread::sleep_for(500ms);
        led = 1;       // tunr OFF RED led 
        ThisThread::sleep_for(500ms);
    }
}
