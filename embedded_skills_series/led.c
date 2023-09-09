#include "led.h"
#include <msp430.h>


void init_led()
{
    P1DIR |= red_LED; // direct pin as output
    P9DIR |= green_LED; // direct pin as output
    P1OUT &= ~red_LED; // turn red LED Off
  //P1OUT ^= red_LED; // testing using xor instead
    P9OUT |= green_LED; // turn green LED on
}
/*

bitwise ops
& and
| or
~ not

turning off red led
ex: red = 0000100 (one bit represents on/off)
ex: out = 1010110 (same bit is currently on, but we want it off)



using and ~:
1111011
1010110
1010010

could also use xor
0000100
1010110
1010010

turning on green led
ex: 00010000 green
ex: 10100100 out

simply use an or
00010000
10100100
10110100 now is on


*/
