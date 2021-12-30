/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Youssef Maaty
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
#include "Platform_Types.h"

#define RCC_BASE 0x40021000
#define GPIO_PA_BASE 0x40010800

#define RCC_APB2ENR *(vuint_32 *)(RCC_BASE + 0x18)
#define GPIO_PA_ODR *(vuint_32 *)(GPIO_PA_BASE + 0x0C)
#define GPIO_PA_CRH *(vuint_32 *)(GPIO_PA_BASE + 0x04)

#define RCC_IOPAEN (1<<2)
#define GPIOPA_13 (1<<13)

typedef union
{
	vuint_32 all_pins;
	struct {
	vuint_32 reserved :13;
	vuint_32 PIN_13:1;
	}S_PIN_t;
}U_GPIOA_ODR_t;

volatile U_GPIOA_ODR_t *  GPIOPA_ODR = (volatile U_GPIOA_ODR_t *)(GPIO_PA_BASE+0x0C);

void NMI_Handler(void)
{

}

int const arr=5;
char  bss_var ;

int main(void)
{
	//set bit number 2 in RCC_APB2ENR
	RCC_APB2ENR |=  RCC_IOPAEN;

	GPIO_PA_CRH &= 0xFF0FFFFF;
	GPIO_PA_CRH |= 0x00200000;

	/* Loop forever */
	while(1){
		//led is on
		//GPIO_PA_ODR |=GPIOPA_13;
		//using union and structure bit fields
		GPIOPA_ODR->S_PIN_t.PIN_13 = 1;
		for(int i=0;i<500;i++);
		//led is off
		GPIOPA_ODR->S_PIN_t.PIN_13=0;
		//GPIO_PA_ODR &= ~(GPIOPA_13);
		for(int i=0;i<500;i++);
	}
}
