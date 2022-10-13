/*
 * GENE.c
 *
 *  Created on: Nov 19, 2021
 *      Author: theob
 */
#include "main.h"
#include "GENE.h"

void GENE_ToggleSetFreqPin(int f){
	int fhz = 499999;
	TIM5->ARR = fhz/f;
	TIM5->CNT = 0;
}

void GENE_TogglePin(void){
	if(GPIOG->ODR){
		GPIOG->ODR = GPIOG->ODR &~0x40;
	}
	else{
		GPIOG->ODR = GPIOG->ODR|0x40;
	}
}
