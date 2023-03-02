/****************************************************************/
/*   Author             :    Mohamed Gamal				        */
/*	 Date 				:    25 January 2023     				*/
/*	 Version 			:    							    	*/
/*	 Description 		:   external interrupt     1            */
/*							                                	*/
/****************************************************************/

/****************************************************************/
/* Description   : Guard to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/
#ifndef _INTERRUPT_0_CONFG_H
#define _INTERRUPT_0_CONFG_H


/****************************************************************/
/** !comment : Please Enter the Sense Mode						*/
/** 		   SENSE_MODE can be : 								*/
/*					    			FALLING 					*/
/*						    		RISING 						*/
/*							    	LOW_LEVEL					*/
/*								    IOT ( Interrupt On Change ) */
/****************************************************************/

#define EXTI0_SENSE_MODE		FALLING



#endif	/**!comment : End of the gaurd [_INTERRUPT_CONFG_H]		   **/