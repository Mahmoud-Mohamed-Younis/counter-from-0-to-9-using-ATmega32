/*
 * Seven_segment.h
 *
 *  Created on: Jun 17, 2018
 *      Author: Mahmoud Mohamed Younis
 */
#include <avr/io.h>

#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_
/*--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>*/
// Data Bus Bits
#define Data_Bus_DIR DDRB
#define Data_Bus     PORTB
#define D0           PB0
#define D1           PB1
#define D2           PB2
#define D3           PB3
/*--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>*/
// Control Bus Bits
#define Control_Bus_DIR DDRC
#define Control_Bus     PORTC
#define C1              PC2
#define C2              PC3
#define C3              PC5
#define C4              PC4
/*--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>*/
//EXternal Functions
void Data_Bus_init(void);
void display_1_init(void);
void display_2_init(void);
void display_3_init(void);
void display_4_init(void);
void display_number(unsigned char num);
/*--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>*/
// Switching Commands
#define display_1_on  ( Control_Bus |=  (1<<C1) )
#define display_1_off ( Control_Bus &= ~(1<<C1) )
#define display_2_on  ( Control_Bus |=  (1<<C2) )
#define display_2_off ( Control_Bus &= ~(1<<C2) )
#define display_3_on  ( Control_Bus |=  (1<<C3) )
#define display_3_off ( Control_Bus &= ~(1<<C3) )
#define display_4_on  ( Control_Bus |=  (1<<C4) )
#define display_4_off ( Control_Bus &= ~(1<<C4) )
/*--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>*/
#endif /* SEVEN_SEGMENT_H_ */
