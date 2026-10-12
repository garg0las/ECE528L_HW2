#include "msp.h"

void Timer_A0_Interrupt_Init(void)
{
    TIMER_A0->CTL = TIMER_A_CTL_MC__STOP | TIMER_A_CTL_CLR;

    TIMER_A0->EX0 = 0; 

    TIMER_A0->CCR[0] = 23999;
    TIMER_A0->CCTL[0] = TIMER_A_CCTLN_CCIE;

    
    NVIC_SetPriority(TA0_0_IRQn, 2);
    NVIC_EnableIRQ(TA0_0_IRQn);
    Timer_A0_Task = TIMER_A_CTL_SSEL__SMCLK | TIMER_A_CTL_ID_1 | TIMER_A_CTL_MC__UP | TIMER_A_CTL_CLR;
}

void TA0_0_IRQHandler(void)
{
    TIMER_A0->CCTL[0] &= ~TIMER_A_CCTLN_CCIFG;
}