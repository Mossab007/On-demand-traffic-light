/*
 * BUTTON.h
 *
 * Created: 10/11/2022 3:52:53 PM
 *  Author: Mossab
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO Driver/Dio.h"

//Button port and pin

#define   BUTTON_1_PORT     'D'
#define   BUTTON_1_PIN       2


//initialize
uint32_t BUTTON_init(uint8_t buttonPort,uint8_t buttonPin);

// button read
uint32_t BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value);




#endif /* BUTTON_H_ */