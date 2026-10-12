#include "msp.h"

void PWM_Out_init(void)
{
    P2->SEL0 |= 0x10; 
    P2->SEL1 &= ~0x10; 
    P2->DIR |= 0x10;

    TIMER_A0->CTL = TIMER_A_CTL_MC__STOP | TIMER_A_CTL_CLR;
    TIMER_A0->CCR[0] = 60000; 
    TIMER_A0->CCR[1] = 30000; 
    TIMER_A0->CCTL[1] = TIMER_A_CCTLN_OUTMOD_7;
    TIMER_A0->CTL = TIMER_A_CTL_SSEL__SMCLK | TIMER_A_CTL_ID_2 | TIMER_A_CTL_MC__UP | TIMER_A_CTL_CLR; 
}