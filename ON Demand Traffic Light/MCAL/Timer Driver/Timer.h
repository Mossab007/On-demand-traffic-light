/*
 * TIMER.h
 *
 * Created: 10/12/2022 7:16:28 PM
 *  Author: Mossab
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "../../Utilities/REGISTERS.h"

//initialize Timer0
void TIMER_init();

//delay of specific amount default uses PRESCALAR 256
void TIMER_delay(uint16_t millisec); 



#endif /* TIMER_H_ */