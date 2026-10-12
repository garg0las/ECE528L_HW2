# ECE528L_HW2

1. (5 pts) What is a hardware timer? What kinds of tasks do embedded systems commonly
use hardware timers for?

A hardware timer is a peripheral module that uses a clock source to increment or decrement a counter and measure time intervals.

2. (5 pts) What is a clock signal used for in embedded systems? List the primary clock
sources available on the MSP432P401R microcontroller and briefly describe each clock
source.

A clock signal can be used to generate a PWM signal and some primary clock sources are: 
- ACLK (Auxiliary Clock): Software selectable as LFXTCLK, VLOCLK, or REFOCLK. Used by individual peripheral modules and limited to 128 kHz.
- MCLK (Master Clock): Used by the CPU and peripheral module interfaces, as well as directly by some peripheral modules.
- HSMCLK (Subsystem Master Clock): Software selectable from multiple clock sources and used by individual peripheral modules.
- SMCLK (Low-Speed Subsystem Master Clock): Uses the HSMCLK clock resource selection but can be divided independently. Used by individual peripheral modules.
- BCLK (Low-Speed Backup Domain Clock): Software selectable as LFXTCLK or REFOCLK and used primarily in the backup domain


3. (5 pts) Consider a 16-bit timer (e.g. Timer_A configured in up mode). If it counts
upward, what is the maximum count value before it rolls over? Show your work.

2^16 = 65536

4. (5 pts) If a 24-bit timer counts upward from zero at 10 MHz, what is its overflow
period? Show your work.

2^24/10,000,000 = 16,777,216/10,000,000 = 1.677s

5. (5 pts) Describe the SysTick timer on the MSP432P401R microcontroller. Provide two
example applications for SysTick in embedded systems. Which clock sources can the
SysTick timer use and how can they be selected?

An integrated system timer that provides a simple 24-bit, clear-on-write, decrementing, wrap-on-zero counter with a flexible control mechanism

6. (5 pts) How many registers does the SysTick timer have on the MSP432P401R
microcontroller and what is the purpose of each? Name them and provide a short
description per register.

The SysTick timer on the MSP432P401R microcontroller has four registers:
- STCSR (SysTick Control and Status Register): Configures the clock, enables the counter, enables the SysTick interrupt, and determines counter status.
- STRVR (SysTick Reload Value Register): Specifies the start value to load into the current value register when the counter reaches zero.
- STCVR (SysTick Current Value Register): Holds the current value of the counter. Writing any value to this register clears it to zero.
- STCR (SysTick Calibration Value Register): Enables software to scale to any required speed using divide and multiply

7. (5 pts) Describe the Timer_A peripheral on the MSP432P401R microcontroller. List the
main operating modes of Timer_A and briefly explain each.

Timer_A Peripheral: Timer_A is a 16-bit timer/counter with multiple capture/compare registers that supports timing, event counting, and PWM generation.
- Stop Mode: The timer is halted, conserving power when Timer_A is not in use.
- Up Mode: The timer counts up to the value in TAxCCR0, then restarts from zero.
- Continuous Mode: The timer counts up to 0FFFFh, then restarts from zero.
- Up/Down Mode: The timer counts up to TAxCCR0, then counts down to 0000h.

8. (10 pts) Briefly state the purpose of the following Timer_A registers.
• TAxCTL : Controls the Timer_A clock source, input divider, operating mode, timer clear, and interrupt enable and flag.
• TAxCCTLn : Controls the capture/compare mode, input selection, output mode, and capture/compare interrupts.
• TAxR : Holds the current count of Timer_A.
• TAxCCRn : In compare mode, holds the data for comparison to the timer value in TAxR. In capture mode, stores the TAxR value when a capture is performed
• TaxIV : Holds the Timer_A interrupt vector value, identifying the highest-priority pending interrupt source.
• TAxEX0 : Controls the input divider expansion. The TAIDEX bits, along with the ID bits, select the divider for the input clock.

9. (5 pts) What is PWM? Provide at least three example applications that use PWM in
embedded systems.

PWM is Pulse Width Modulation and its a square wave with variable duty cycle. Some examples are conrolling leds, servo motors, and generating exact frequencies.    

10. (5 pts) How many Timer_A modules are available and how many PWM outputs can each
module provide?

The MSP432P401R has 4 Timer_A modules (Timer_A0, Timer_A1, Timer_A2, and Timer_A3). Each Timer_A module has 5 capture/compare registers (TAxCCR0–TAxCCR4), allowing up to 5 PWM outputs per module, for a total of 20 PWM outputs.

