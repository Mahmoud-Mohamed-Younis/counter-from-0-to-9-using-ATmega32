/*
 * Seven_segmentg.c
 *
 *  Created on: Jun 17, 2018
 *      Author: Mahmoud Mohamed Younis
 */

#include "Seven_segment.h"
/*--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>*/
void Data_Bus_init(void)
{
	Data_Bus_DIR |=  (1<<D0)  |  (1<<D1) |  (1<<D2) |  (1<<D3);
	Data_Bus     &= ~(1<<D0)  & ~(1<<D1) & ~(1<<D2) & ~(1<<D3);
}
/*--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>*/
void display_1_init(void)
{
	Control_Bus_DIR |= (1<<C1);
	Control_Bus     |= (1<<C1);
}
/*--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>*/
void display_2_init(void)
{
	Control_Bus_DIR |= (1<<C2);
	Control_Bus     |= (1<<C2);
}
/*--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>*/
void display_3_init(void)
{
	Control_Bus_DIR |= (1<<C3);
	Control_Bus     |= (1<<C3);
}
/*--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>*/
void display_4_init(void)
{
	Control_Bus_DIR |= (1<<C4);
	Control_Bus     |= (1<<C4);
}
/*--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>*/
void display_number(unsigned char num)
{
	switch(num)
	{
	// Start of switch case
	case 0: // display number 0
	{
		Data_Bus &= ~(1<<D0);
		Data_Bus &= ~(1<<D1);
		Data_Bus &= ~(1<<D2);
		Data_Bus &= ~(1<<D3);
		return;
	}
	case 1: // display number 1
	{
		Data_Bus |=  (1<<D0);
		Data_Bus &= ~(1<<D1);
		Data_Bus &= ~(1<<D2);
		Data_Bus &= ~(1<<D3);
		return;
	}
	case 2: // display number 2
	{
		Data_Bus &= ~(1<<D0);
		Data_Bus |=  (1<<D1);
		Data_Bus &= ~(1<<D2);
		Data_Bus &= ~(1<<D3);
		return;
	}
	case 3: // display number 3
	{
		Data_Bus |=  (1<<D0);
		Data_Bus |=  (1<<D1);
		Data_Bus &= ~(1<<D2);
		Data_Bus &= ~(1<<D3);
		break;
	}
	case 4: // display number 4
	{
		Data_Bus &= ~(1<<D0);
		Data_Bus &= ~(1<<D1);
		Data_Bus |=  (1<<D2);
		Data_Bus &= ~(1<<D3);
		return;
	}
	case 5: // display number 5
	{
		Data_Bus |=  (1<<D0);
		Data_Bus &= ~(1<<D1);
		Data_Bus |=  (1<<D2);
		Data_Bus &= ~(1<<D3);
		return;
	}
	case 6: // display number 6
	{
		Data_Bus &= ~(1<<D0);
		Data_Bus |=  (1<<D1);
		Data_Bus |=  (1<<D2);
		Data_Bus &= ~(1<<D3);
		return;
	}
	case 7: // display number 7
	{
		Data_Bus |=  (1<<D0);
		Data_Bus |=  (1<<D1);
		Data_Bus |=  (1<<D2);
		Data_Bus &= ~(1<<D3);
		return;
	}
	case 8: // display number 8
	{
		Data_Bus &= ~(1<<D0);
		Data_Bus &= ~(1<<D1);
		Data_Bus &= ~(1<<D2);
		Data_Bus |=  (1<<D3);
		return;
	}
	case 9: // display number 9
	{
		Data_Bus |=  (1<<D0);
		Data_Bus &= ~(1<<D1);
		Data_Bus &= ~(1<<D2);
		Data_Bus |=  (1<<D3);
		return;
	}
	default: // do nothing
	{
		return;
	}
	// End of switch case
	}
	return;
}
/*--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>--------------------<>*/
