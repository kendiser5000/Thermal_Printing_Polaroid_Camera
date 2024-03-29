/**
* @file cpu.h
* @brief Contains CPU Initialization and Register functions/definitions
* @date 6/19/2018
*/

#ifndef __CPU_H
#define __CPU_H

#include "tm4c123gh6pm.h"
#include <stdint.h>
#include "PLL.h"

#define BUS_CLK		80000000		// 80 Mhz


/* LED PORTF Register Setup **/
#define CLOCK_MASK_PORTF 	0x20
#define PF1  				(*((volatile uint32_t *)0x40025008))
#define PF2  				(*((volatile uint32_t *)0x40025010))
#define PF3  				(*((volatile uint32_t *)0x40025020))
#define LEDS				0x0E
#define GREEN_LED			PF3
#define GREEN_BLINK 		0x8
#define BLUE_LED			PF2
#define BLUE_BLINK			0x4
#define RED_LED				PF1
#define RED_BLINK			0x2

/**
 * @brief Initialize system clock (PLL)
**/
void CLOCK_Init(void);

/**
 * @brief Initialize development board LEDS, example function
**/
void LED_Init(void);



#endif // __CPU_H

