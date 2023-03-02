/****************************************************************/
/*   Author             :    Mohamed Gamal				    */
/*	 Date 				:    25 January 2023 						*/
/*	 Version 			:    							 	*/
/*	 Description 		:   external interrupt*/
/*								*/
/****************************************************************/


/****************************************************************/
/* Description   : Guard to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/

#ifndef _INTERRUPT_PRIVATE_H
#define _INTERRUPT_PRIVATE_H


/****************************************************************/
/** !comment : From Data Sheet :  Memory mapped of MCUCR    	*/
/**			   Register	is  0X55						    	*/
/****************************************************************/
/**			   MCUCR : MCU Control Register contains control	*/
/** 		   bits for interrupt sense control and general 	*/
/**            MCU functions.							    	*/
/****************************************************************/

#define MCUCR		*((volatile u8 * ) (0X55))

/****************************************************************/
/** !comment : From Data Sheet :  Memory mapped of MCUCSR   	*/
/**			   Register	is  0X54.								*/
/****************************************************************/
/**			   MCUCSR : MCU Control and Status Register			*/
/****************************************************************/

#define MCUCSR      *((volatile u8 * ) (0X54))

/****************************************************************/
/** !comment : From Data Sheet :  Memory mapped of GICR     	*/
/**			   Register	is  0X5B.								*/
/****************************************************************/
/**			   GICR : General Interrupt Control Register		*/
/****************************************************************/

#define GICR        *((volatile u8 * ) (0X5B))


/****************************************************************/
/** !comment : From Data Sheet :  Memory mapped of GIFR     	*/
/**			   Register	is  0X5A.						    	*/
/****************************************************************/
/**			   GIFR : General Interrupt Flag Register			*/
/****************************************************************/

#define GIFR        *((volatile u8 * ) (0X5A))

/****************************************************************/
/** !comment : From Data Sheet :  Memory mapped of SERG     	*/
/**			   Register	is  0X5F.						    	*/
/****************************************************************/
/**			  SREG :global Interrupt Enable 			*/
/****************************************************************/


#define SREG        *((volatile u8*  ) (0x5F))

/** Linker Problem solved */






/****************************************************************/
/* Description    : This function used to interrupt 1			*/
/*																*/
/*					Inputs : void					  			*/
/*					Return : void		 					    */
/****************************************************************/
/* Pre_condition  :                                      */
/*     				  							    */
/****************************************************************/
void __vector_1(void) __attribute__(( signal , used ));





#endif	/**!comment : End of the guard _INTERRUPT_PRIVATE_H		   **/