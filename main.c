/*
 * main.c
 *
 *  Created on: Jun 17, 2018
 *      Author: Mahmoud Mohamed Younis
 */

#include <avr/io.h>
#include <util/delay.h>
#include "Seven_segment.h"

int main(void)
{
	Data_Bus_init();
	display_1_init();

	// Counter element
	unsigned char i = 0;

	while(1)
	{
		for(i=0; i<=9; i++)
		{
			/*----<>----<>----<>----<>----<>----<>----<>*/
			display_number(i);
			_delay_ms(1000);
			/*----<>----<>----<>----<>----<>----<>----<>*/
		}
	}
	return 0;
}
