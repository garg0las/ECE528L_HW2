# ECE528L_HW2

1. (5 pts) What is a hardware timer? What kinds of tasks do embedded systems commonly
use hardware timers for?

2. (5 pts) What is a clock signal used for in embedded systems? List the primary clock
sources available on the MSP432P401R microcontroller and briefly describe each clock
source.

3. (5 pts) Consider a 16-bit timer (e.g. Timer_A configured in up mode). If it counts
upward, what is the maximum count value before it rolls over? Show your work.

4. (5 pts) If a 24-bit timer counts upward from zero at 10 MHz, what is its overflow
period? Show your work.

5. (5 pts) Describe the SysTick timer on the MSP432P401R microcontroller. Provide two
example applications for SysTick in embedded systems. Which clock sources can the
SysTick timer use and how can they be selected?

6. (5 pts) How many registers does the SysTick timer have on the MSP432P401R
microcontroller and what is the purpose of each? Name them and provide a short
description per register.

7. (5 pts) Describe the Timer_A peripheral on the MSP432P401R microcontroller. List the
main operating modes of Timer_A and briefly explain each.

8. (10 pts) Briefly state the purpose of the following Timer_A registers.
• TAxCTL : Controls the Timer_A clock source, input divider, operating mode, timer clear, and interrupt enable and flag.
• TAxCCTLn : Controls the capture/compare mode, input selection, output mode, and capture/compare interrupts.
• TAxR : Holds the current count of Timer_A.
• TAxCCRn : In compare mode, holds the data for comparison to the timer value in TAxR. In capture mode, stores the TAxR value when a capture is performed
• TaxIV : Holds the Timer_A interrupt vector value, identifying the highest-priority pending interrupt source.
• TAxEX0 : Controls the input divider expansion. The TAIDEX bits, along with the ID bits, select the divider for the input clock.

9. (5 pts) What is PWM? Provide at least three example applications that use PWM in
embedded systems.

10. (5 pts) How many Timer_A modules are available and how many PWM outputs can each
module provide?
