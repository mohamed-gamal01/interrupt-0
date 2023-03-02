/*
 * interrupt.c
 *
 * Created: 2/25/2023 3:18:21 PM
 * Author : CONNECT
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#include "dio.h"
#include "interrupt 0.h"



void toggle(void);
int main(void)
{
	u8 x;
	EXT0_voidCallBack(toggle);
	
	dio_vidConfigChannel(DIO_PORTD,DIO_PIN2,INPUT);
	dio_vidConfigChannel(DIO_PORTB,DIO_PIN7,OUTPUT);
	dio_vidWriteChannel(DIO_PORTD,DIO_PIN2,STD_HIGH);
	
	EXT0_voidInit ();
	EXT0_voidEnable();
	SREG_VoidEnable ();
	_delay_ms(1000);
	while (1)
	{
		
		
		
		
	}
	return 0;
}

/****************************************************************/
/* Description    : function to toggle the led	used for        */
/*                    the interrupt                         	*/			
/*																*/
/*					Inputs : void			  		         	*/
/*					Return : void		 					    */
/****************************************************************/
/* Pre_condition  :                                             */
/*     				 						                    */
/****************************************************************/
void toggle(void)
{
	u8 static x;
	
	

	x=dio_dioLevelReadChannel(DIO_PORTD,DIO_PIN2);
	
	if(x==0)
	{
		FLIP_BIT(DIO_PORTB_REG,DIO_PIN7);
		_delay_ms(1000);
		
	}
	
	
}
