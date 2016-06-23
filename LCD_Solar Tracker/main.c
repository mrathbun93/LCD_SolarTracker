#include <msp430g2553.h>
#include "lcdLib.h"

void main(void)
{
WDTCTL = WDTPW + WDTHOLD;// Stop Watchdog

lcdInit();  // Initialize LCD

lcdSetText("Go ", 0, 0);
lcdSetText("Miners! ", 0,1);
__bis_SR_register(LPM0_bits);   // Enter Low Power Mode 0 without interrupts


}
