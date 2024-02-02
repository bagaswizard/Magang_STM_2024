/*
 * trig.h
 *
 *  Created on: Feb 2, 2024
 *      Author: bagas
 */

#ifndef INC_TRIG_HPP_
#define INC_TRIG_HPP_

#include "main.h"

extern TIM_HandleTypeDef htim1;
extern TIM_HandleTypeDef htim2;


void hcsr04_init() ;
void HCSR04_Read(void);


#endif /* INC_TRIG_HPP_ */
