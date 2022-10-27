/*
 * main.c
 *
 *  Created on: Jan 27, 2021
 *      Author: MOHAMED ADEL
 */

#define F_CPU 8000000UL
#include <util\delay.h>
#include "DATA_TYPE.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "SPI_interface.h"


int main ()
{
	u8 local_u8data;
	DIO_voidInit();

	SPI_voidInit();
	while(1)
	{
		SPI_u8Transieve(5,&local_u8data);
		if(local_u8data == 13);
		{
			DIO_u8SetPinValue(DIO_U8_PORTA,DIO_U8_PIN0,DIO_U8_HIGH);

		}
		_delay_ms(200);
	}
}
