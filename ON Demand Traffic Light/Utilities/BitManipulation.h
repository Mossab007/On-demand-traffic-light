/*
 * BitManipulation.h
 *
* Created: 10/10/2022 9:15:46 PM
*  Author: Mossab
 */ 

#ifndef BITWISE_H_
#define BITWISE_H_


#define SET_BIT( REG , BIT_NO)       (REG|=(1<<BIT_NO))

#define CLR_BIT( REG , BIT_NO)       (REG &= ~(1<<BIT_NO))

#define TOGGLE_BIT( REG , BIT_NO)    (REG ^= (1<<BIT_NO))

#define READ_BIT( REG , BIT_NO)    ((REG & (1<<BIT_NO))>>BIT_NO)



 




#endif /* BITWISE_H_ */