/*
 * LED.h
 *
 * Created: 10/10/2022 8:51:28 PM
 *  Author: Mossab
 */ 

#include "LED.h"

//LED initialization
uint32_t LED_init(uint8_t ledPort,uint8_t ledPin)
{
	if(DIO_init(ledPort,ledPin,OUTPUT)){
		return true;
}
	else{
		//error handling
		return false;
	}
}

//LED turn on
uint32_t LED_on(uint8_t ledPort,uint8_t ledPin)
{
	if(DIO_write(ledPort,ledPin,HIGH)){
			return true;
}
	else {
		//error handling
			return false;
	}
}

//LED turn off
uint32_t LED_off(uint8_t ledPort,uint8_t ledPin)
{
	if(DIO_write(ledPort,ledPin,LOW)){;
		return true;
}
	else{
		//error handling
		return false;
	
}
}

//LED toggle
uint32_t LED_toggle(uint8_t ledPort,uint8_t ledPin)
{
	if(DIO_toggle(ledPort,ledPin)){
		return true;
}
	else{
		//error handling
		return false;
	}
}
