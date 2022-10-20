/*
 * Dio1.c
 *
 * Created: 10/10/2022 7:16:09 PM
 *  Author: Mossab
 */ 
#include "Dio.h"



// initialize DIO direction

uint32_t DIO_init    (uint8_t PortNum , uint8_t PinNum , uint8_t Direction) 
{
	switch (PortNum)
	{
		case PORT_A :
		if (Direction == INPUT)
		{
			CLR_BIT (DDRA,PinNum);
			return true;
		}
		else if (Direction == OUTPUT)
		{
			SET_BIT(DDRA,PinNum);
			return true;
		}
		else {
			//error handling
			return false;
		}
		
		break;
		
		case PORT_B :
		if (Direction == INPUT)
		{
			CLR_BIT (DDRB,PinNum);
			return true;
		}
		else if (Direction == OUTPUT)
		{
			SET_BIT(DDRB,PinNum);
			return true;
		}
		else
		{
			//Error Handling
			return false;
		}
		break;
		
		case PORT_C :
		if (Direction == INPUT)
		{
			CLR_BIT (DDRC,PinNum);
			return true;
		}
		else if (Direction == OUTPUT)
		{
			SET_BIT(DDRC,PinNum);
			return true;
		}
		else
		{
			//Error Handling
			return false;
		}
		break;
		
		case PORT_D :
		if (Direction == INPUT)
		{
			CLR_BIT (DDRD,PinNum);
			return true;
		}
		else if (Direction == OUTPUT)
		{
			SET_BIT(DDRD,PinNum);
			return true;
		}
		else
		{
			//Error Handling
			return false
		}
		default: //error handling
			return false;
	}
	
}
uint32_t DIO_write   (uint8_t PortNum , uint8_t PinNum , uint8_t Value)     // write data to DIO
{
	switch (PortNum)
	{
		case PORT_A :
		if (Value == LOW)
		{
			CLR_BIT (PORTA,PinNum);
			return true;
		}
		else if (Value == HIGH)
		{
			SET_BIT(PORTA,PinNum);
			return true;
		}
		else{
			//error handling
			return false;
		}
		
		break;
		
		case PORT_B :
		if (Value == LOW)
		{
			CLR_BIT (PORTB,PinNum);
			return true;
		}
		else if (Value == HIGH)
		{
			SET_BIT(PORTB,PinNum);
			return true;
		}
		else{
			return false;
		}
		
		break;
		
		case PORT_C :
		if (Value == LOW)
		{
			CLR_BIT (PORTC,PinNum);
			return true;
		}
		else if (Value == HIGH)
		{
			SET_BIT(PORTC,PinNum);
			return true;
		}
		else
		{
			//Error Handling
			return false;
		}
		break;
		
		case PORT_D :
		if (Value == LOW)
		{
			CLR_BIT (PORTD,PinNum);
			return true;
		}
		else if (Value == HIGH)
		{
			SET_BIT(PORTD,PinNum);
			return true;
		}
		else
		{
			//Error Handling
			return false;
		}
		default: //error handling
			return false;
	}
}
uint32_t DIO_toggle  (uint8_t PortNum , uint8_t PinNum )                     //Toggle DIO
{
	switch (PortNum)
	{
		case PORT_A :
		TOGGLE_BIT(PORTA , PinNum);
		return true;
		break;
		
		case PORT_B :
		TOGGLE_BIT(PORTB , PinNum);
		return true
		break;
		
		case PORT_C :
		TOGGLE_BIT(PORTC , PinNum);
		return true;
		break;
		
		case PORT_D :
		TOGGLE_BIT(PORTD , PinNum);
		return true;
		break;
	
	default: //error handling
		return false;
	}
}

uint32_t DIO_read    (uint8_t PortNum , uint8_t PinNum , uint8_t *Value)     // read DIO
{
	switch (PortNum)
	{
		case PORT_A :
		*Value= READ_BIT (PINA , PinNum);
		return true;
		break;
		
		case PORT_B :
		*Value= READ_BIT (PINB , PinNum);
		return true;
		break;
		
		case PORT_C :
		*Value= READ_BIT (PINC ,PinNum);
		return true;
		break;
		
		case PORT_D :
		*Value= READ_BIT (PIND ,PinNum);
		return true;
		break;
	default: //error handling
		return false;
	}
	
}
