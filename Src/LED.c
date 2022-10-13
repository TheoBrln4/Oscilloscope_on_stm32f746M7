/*
 * LED.c
 *
 *  Created on: Oct 15, 2021
 *      Author: theob
 */
#include "LED.h"
void LED_DispGreen(int val){
	if(val == 0){
		GPIOI->ODR=GPIOI->ODR&~0x2;
	}
	else{
		GPIOI->ODR = GPIOI->ODR|0x2;
	}
}

void LED_SetFreqGreen(int f){
	TIM2->ARR = 9999/f;
	TIM2->CNT = 0;
}
