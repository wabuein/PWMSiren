// ENGR 202 . Lab3 preparation speaker example.
// 30/10/2023 Tilly Alton, originally by Ioannis Tsitsimpelis
//
// Description of code
// This code uses the PWM hardware output
// of the board to produce a siren effect.

#include "mbed.h"
// In your board, PB_8 corresponds to pin D15
PwmOut speaker(PB_8);

int main()
{
    int i;
    int freq1 = 1200;
    int freq2 = 700;
    float delay = 500;

    while (1) {
        // two tone effect - two peroids of two frequencies
        // increase volume - by changing the PWM duty cycle
        speaker.period(1.0/freq1);
        speaker.write(0.5); // Half volume
        thread_sleep_for(delay);
        speaker.period(1.0/freq2);
        thread_sleep_for(delay);
    }

}