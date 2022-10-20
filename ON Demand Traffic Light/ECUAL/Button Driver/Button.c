/*
 * BUTTON.h
 *
 * Created: 10/11/2022 3:55:12 PM
 *  Author: Mossab
 */ 



#include "Button.h"

//button initialization
uint32_t BUTTON_init(uint8_t buttonPort, uint8_t buttonPin)
{
	if (DIO_init(buttonPort,buttonPin,INPUT)){
		return true;
	}
	else{
		//error handling
		return false;
	}
}


// button read
uint32_t BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value)
{
	//counter for pressing time
	if (READ_BIT(PIND,2))
	{
	
	while(READ_BIT(PIND,2))
	{
		++*value;
	}
	return true;
	}
	else {
		//error handling
		return false;
	}
	
}
