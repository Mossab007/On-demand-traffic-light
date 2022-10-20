/*
 * LED.h
 *
 * Created: 10/10/2022 8:52:17 PM
 *  Author: Mossab
 */ 

#include "../../MCAL/DIO Driver/Dio.h"

#ifndef LED_H_
#define LED_H_


// Car port and pins
#define LED_CAR_PORT      PORT_A

#define LED_CAR_G_PIN       0

#define LED_CAR_Y_PIN       1

#define LED_CAR_R_PIN       2


// Pedestrian port and pins
#define LED_PED_PORT      PORT_B

#define LED_PED_G_PIN       0

#define LED_PED_Y_PIN       1

#define LED_PED_R_PIN       2


//led initialize
uint32_t LED_init(uint8_t ledPort,uint8_t ledPin);

uint32_t LED_on(uint8_t ledPort,uint8_t ledPin);

uint32_t LED_off(uint8_t ledPort,uint8_t ledPin);

uint32_t LED_toggle(uint8_t ledPort,uint8_t ledPin);



#endif /* LED_H_ */