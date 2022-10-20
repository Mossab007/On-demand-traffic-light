/*
 * Dio1.h
 *
 * Created: 10/10/2022 7:14:53 PM
 *  Author: Mossab
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../../Utilities/REGISTERS.h"



//ALL MACROS

#define PORT_A   'A'
#define PORT_B   'B'
#define PORT_C   'C'
#define PORT_D   'D'

//Direction defines
#define INPUT     0
#define OUTPUT    1

//Value Defines
#define HIGH    1
#define LOW     0




// ALL FUNCTIONS PROTOTYPES
// initialize DIO direction
uint32_t DIO_init    (uint8_t PortNum , uint8_t PinNum , uint8_t Direction);
// write data to DIO
uint32_t DIO_write   (uint8_t PortNum , uint8_t PinNum , uint8_t Value);
//Toggle DIO
uint32_t DIO_toggle  (uint8_t PortNum , uint8_t PinNum );
// read DIO
uint32_t DIO_read    (uint8_t PortNum , uint8_t PinNum , uint8_t *Value);





#endif /* DIO1_H_ */