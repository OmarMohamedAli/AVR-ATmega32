/********************************************************************************
 * File        : External Interrupt.c
 * Description : External Interrupt Functions Implementation.
 * Author      : Eng: Omar Mohamed Ali 
 * Date        : 1/2/2022
 * Version     : 1.0.0
 *********************************************************************************/
/*********************************************************************************
                           << File Inclusions >>
**********************************************************************************/
#include "MEXTI_INTERFACE.h"
#include "MDIO_INTERFACE.h"

/*********************************************************************************
                   << Function Pointers for CallBack Functions >>  
**********************************************************************************/
void (* CallBackPtr0)(void);
void (* CallBackPtr1)(void);
void (* CallBackPtr2)(void);

/*********************************************************************************
                          << For Global Interrupt >>  
**********************************************************************************/
/******************************************************************************
 * Prototype   : void MEXTI_VidEnableGlobalInterrupt(void);
 * Description : this Function is used to Enable Global Interrupt.
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI_VidEnableGlobalInterrupt(void)
{
	SET_BIT(SREG ,7);
}

/******************************************************************************
 * Prototype   : void MEXTI_VidDisbleGlobalInterrupt(void);
 * Description : this Function is used to Disable Global Interrupt.
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI_VidDisbleGlobalInterrupt(void)
{
	CLEAR_BIT(SREG ,7);
}

/*********************************************************************************
                          << For External Interrupt_0 >>
**********************************************************************************/
/******************************************************************************
 * Prototype   : ERROR_STATE_t MEXTI0_ERROR_STATE_t_Init(EXT_INT_MODE_t Mode);
 * Description : this Function is used to Initialize External Interrupt[0].
 
 * Arguments   : EXT_INT_MODE_t -> 1-LOW_LEVEl
			                       2-ANY_LOGICAL_CHANGE
								   3-FALLING_EDGE
								   4-RISING_EDGE 
								   
 * return      : ERROR_STATE_t  -> 1-RET_OK
								   2-RET_NOK
								   3-RET_NULL_PTR
								   4-RET_OUT_OF_RANGE
 ******************************************************************************/
ERROR_STATE_t MEXTI0_ERROR_STATE_t_Init(EXT_INT_MODE_t Mode)
{
	ERROR_STATE_t LOC_enuReturnValue = RET_OK;
	if(( Mode >= LOW_LEVEL )&&( Mode <= RISING_EDGE ))
	{
		/* Make Ext_INT0_Pin Input & Pull Up for Some Constraints on ATmega32 Kit  */
		MDIO_ERROR_STATE_t_SetPinDirection(PB7 , OUTPUT);
		MDIO_ERROR_STATE_t_SetPinValue(PB7 , LOW);
		MDIO_ERROR_STATE_t_SetPinDirection(Ext_INT0_Pin , INPUT);
		MDIO_ERROR_STATE_t_SetInputPinMode(Ext_INT0_Pin , PULL_UP);
		
		/* Enable Global Interrupt */
		MEXTI_VidEnableGlobalInterrupt();
	
		switch(Mode)
		{
			case LOW_LEVEL:
			CLEAR_BIT(MCUCR , 0);
			CLEAR_BIT(MCUCR , 1);
			break;
				
			case ANY_LOGICAL_CHANGE:
			SET_BIT  (MCUCR , 0);
			CLEAR_BIT(MCUCR , 1);
			break;
				
			case FALLING_EDGE:
			CLEAR_BIT(MCUCR , 0);
			SET_BIT  (MCUCR , 1);
			break;
				
			case RISING_EDGE:
			SET_BIT(MCUCR , 0);
			SET_BIT(MCUCR , 1);
			break;
				
			default:
			break;
		}  // end of switch
		LOC_enuReturnValue = RET_OK;
	}// end of if
	else
	{
		LOC_enuReturnValue = RET_NOK;
	}
	return LOC_enuReturnValue;
}

/******************************************************************************
 * Prototype   : void MEXTI0_Vid_ENABLE(void);
 * Description : this Function is used to Enable External Interrupt[0].
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI0_Vid_ENABLE(void)
{
	SET_BIT(GICR ,6);
}

/******************************************************************************
 * Prototype   : void MEXTI0_Vid_DISABLE(void);
 * Description : this Function is used to Disable External Interrupt[0].
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI0_Vid_DISABLE(void)
{
	CLEAR_BIT(GICR ,6);
}

/******************************************************************************
 * Prototype   : ERROR_STATE_t MEXTI0_ERROR_STATE_t_ReadFlag(u8 *Pu8FlagValue);
 * Description : this Function is used to Read External Interrupt[0] Flag.
 * Arguments   : Address of Value Variable.
 * return      : ERROR_STATE_t  -> 1-RET_OK
								   2-RET_NOK
								   3-RET_NULL_PTR
								   4-RET_OUT_OF_RANGE
 ******************************************************************************/
ERROR_STATE_t MEXTI0_ERROR_STATE_t_ReadFlag(u8 *Pu8Value)
{
	ERROR_STATE_t LOC_enumReturnValue = RET_OK;
	if(Pu8Value != NULL)
	{
		*Pu8Value = GET_BIT(GIFR ,6);
		LOC_enumReturnValue = RET_OK;
	}
	else
	{
		LOC_enumReturnValue = RET_NOK;
	}
	return LOC_enumReturnValue;
}

/******************************************************************************
 * Prototype   : void MEXTI0_SetCallBack(void (* CopyFunPtr)(void));
 * Description : this Function is used to determine function that run when External Interrupt[0] is occurred.
 * Arguments   : function pointer to function that will be executed in main Program.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI0_SetCallBack(void (* CopyFunPtr)(void))
{
	CallBackPtr0 = CopyFunPtr;
}

/******************************************************************************
 * Prototype   : void __vector_1(void);
 * Description : this Function is Called when External Interrupt[0] is occurred.
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void __vector_1(void)
{
	if(CallBackPtr0 != NULL)
	{
		CallBackPtr0();
	}
}





/*********************************************************************************
                          << For External Interrupt_1 >>
**********************************************************************************/
/******************************************************************************
 * Prototype   : ERROR_STATE_t MEXTI1_ERROR_STATE_t_Init(EXT_INT_MODE_t Mode);
 * Description : this Function is used to Initialize External Interrupt[1].
 
 * Arguments   : EXT_INT_MODE_t -> 1-LOW_LEVEl
			                       2-ANY_LOGICAL_CHANGE
								   3-FALLING_EDGE
								   4-RISING_EDGE 
								   
 * return      : ERROR_STATE_t  -> 1-RET_OK
								   2-RET_NOK
								   3-RET_NULL_PTR
								   4-RET_OUT_OF_RANGE
 ******************************************************************************/
ERROR_STATE_t MEXTI1_ERROR_STATE_t_Init(EXT_INT_MODE_t Mode)
{
	ERROR_STATE_t LOC_enuReturnValue = RET_OK;
	if(( Mode >= LOW_LEVEL )&&( Mode <= RISING_EDGE ))
	{
		/* Make Ext_INT0_Pin Input & Pull Up for Some Constraints on ATmega32 Kit  */
		MDIO_ERROR_STATE_t_SetPinDirection(PB7 , OUTPUT);
		MDIO_ERROR_STATE_t_SetPinValue(PB7 , LOW);
		MDIO_ERROR_STATE_t_SetPinDirection(Ext_INT1_Pin , INPUT);
		MDIO_ERROR_STATE_t_SetInputPinMode(Ext_INT1_Pin , PULL_UP);
		
		/* Enable Global Interrupt */
		MEXTI_VidEnableGlobalInterrupt();
		
		switch(Mode)
		{
			case LOW_LEVEL:
			CLEAR_BIT(MCUCR , 2);
			CLEAR_BIT(MCUCR , 3);
			break;
			
			case ANY_LOGICAL_CHANGE:
			SET_BIT  (MCUCR , 2);
			CLEAR_BIT(MCUCR , 3);
			break;
			
			case FALLING_EDGE:
			CLEAR_BIT(MCUCR , 2);
			SET_BIT  (MCUCR , 3);
			break;
			
			case RISING_EDGE:
			SET_BIT(MCUCR , 2);
			SET_BIT(MCUCR , 3);
			break;
			
			default:
			break;
		} // end of switch
		LOC_enuReturnValue = RET_OK;
	}// end of if
	else
	{
		LOC_enuReturnValue = RET_NOK;
	}
	return LOC_enuReturnValue;
}


/******************************************************************************
 * Prototype   : void MEXTI1_Vid_ENABLE(void);
 * Description : this Function is used to Enable External Interrupt[1].
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI1_Vid_ENABLE(void)
{
	SET_BIT(GICR ,7);
}


/******************************************************************************
 * Prototype   : void MEXTI1_Vid_DISABLE(void);
 * Description : this Function is used to Disable External Interrupt[1].
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI1_Vid_DISABLE(void)
{
	CLEAR_BIT(GICR ,7);
}


/******************************************************************************
 * Prototype   : ERROR_STATE_t MEXTI1_ERROR_STATE_t_ReadFlag(u8 *Pu8FlagValue);
 * Description : this Function is used to Read External Interrupt[1] Flag.
 * Arguments   : Address of Value Variable.
 * return      : ERROR_STATE_t  -> 1-RET_OK
								   2-RET_NOK
								   3-RET_NULL_PTR
								   4-RET_OUT_OF_RANGE
 ******************************************************************************/
ERROR_STATE_t MEXTI1_ERROR_STATE_t_ReadFlag(u8 *Pu8Value)
{
	ERROR_STATE_t LOC_enumReturnValue = RET_OK;
	if(Pu8Value != NULL)
	{
		*Pu8Value = GET_BIT(GIFR ,7);
		LOC_enumReturnValue = RET_OK;
	}
	else
	{
		LOC_enumReturnValue = RET_NOK;
	}
	return LOC_enumReturnValue;
}


/******************************************************************************
 * Prototype   : void MEXTI1_SetCallBack(void (* CopyFunPtr)(void));
 * Description : this Function is used to determine function that run when External Interrupt[1] is occurred.
 * Arguments   : function pointer to function that will be executed in main Program.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI1_SetCallBack(void (* CopyFunPtr)(void))
{
	CallBackPtr1 = CopyFunPtr;
}

/******************************************************************************
 * Prototype   : void __vector_2(void);
 * Description : this Function is Called when External Interrupt[1] is occurred.
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void __vector_2(void)
{
	if(CallBackPtr1 != NULL)
	{
		CallBackPtr1();
	}
}

/*********************************************************************************
                          << For External Interrupt_2 >>
**********************************************************************************/
/******************************************************************************
 * Prototype   : ERROR_STATE_t MEXTI2_ERROR_STATE_t_Init(EXT_INT_MODE_t Mode);
 * Description : this Function is used to Initialize External Interrupt[2].
 
 * Arguments   : EXT_INT_MODE_t -> 1-FALLING_EDGE
								   2-RISING_EDGE 
								   
 * return      : ERROR_STATE_t  -> 1-RET_OK
								   2-RET_NOK
								   3-RET_NULL_PTR
								   4-RET_OUT_OF_RANGE
 ******************************************************************************/
ERROR_STATE_t MEXTI2_ERROR_STATE_t_Init(EXT_INT_MODE_t Mode)
{
	ERROR_STATE_t LOC_enuReturnValue = RET_OK;
	if(( Mode >= LOW_LEVEL )&&( Mode <= RISING_EDGE ))
	{
		/* Make Ext_INT0_Pin Input & Pull Up for Some Constraints on ATmega32 Kit  */
		MDIO_ERROR_STATE_t_SetPinDirection(Ext_INT2_Pin , INPUT);
		MDIO_ERROR_STATE_t_SetInputPinMode(Ext_INT2_Pin , PULL_UP);

		/* Enable Global Interrupt */
		MEXTI_VidEnableGlobalInterrupt();
		
		switch(Mode)
		{
			case FALLING_EDGE:
			CLEAR_BIT(MCUCSR , 6);
			break;
			
			case RISING_EDGE:
			SET_BIT(MCUCSR , 6);
			break;
			
			default:
			break;
		} // end of switch
		LOC_enuReturnValue = RET_OK;
	}// end of if
	else
	{
		LOC_enuReturnValue = RET_NOK;
	}
	return LOC_enuReturnValue;
}


/******************************************************************************
 * Prototype   : void MEXTI2_Vid_ENABLE(void);
 * Description : this Function is used to Enable External Interrupt[2].
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI2_Vid_ENABLE(void)
{
	SET_BIT(GICR ,5);
}


/******************************************************************************
 * Prototype   : void MEXTI2_Vid_DISABLE(void);
 * Description : this Function is used to Disable External Interrupt[2].
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI2_Vid_DISABLE(void)
{
	CLEAR_BIT(GICR ,5);
}


/******************************************************************************
 * Prototype   : ERROR_STATE_t MEXTI2_ERROR_STATE_t_ReadFlag(u8 *Pu8FlagValue);
 * Description : this Function is used to Read External Interrupt[2] Flag.
 * Arguments   : Address of Value Variable.
 * return      : ERROR_STATE_t  -> 1-RET_OK
								   2-RET_NOK
								   3-RET_NULL_PTR
								   4-RET_OUT_OF_RANGE
 ******************************************************************************/
ERROR_STATE_t MEXTI2_ERROR_STATE_t_ReadFlag(u8 *Pu8Value)
{
	ERROR_STATE_t LOC_enumReturnValue = RET_OK;
	if(Pu8Value != NULL)
	{
		*Pu8Value = GET_BIT(GIFR ,5);
		LOC_enumReturnValue = RET_OK;
	}
	else
	{
		LOC_enumReturnValue = RET_NOK;
	}
	return LOC_enumReturnValue;
}


/******************************************************************************
 * Prototype   : void MEXTI2_SetCallBack(void (* CopyFunPtr)(void));
 * Description : this Function is used to determine function that run when External Interrupt[2] is occurred.
 * Arguments   : function pointer to function that will be executed in main Program.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI2_SetCallBack(void (* CopyFunPtr)(void))
{
	CallBackPtr2 = CopyFunPtr;
}

/******************************************************************************
 * Prototype   : void __vector_3(void);
 * Description : this Function is Called when External Interrupt[2] is occurred.
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void __vector_3(void)
{
	if(CallBackPtr2 != NULL)
	{
		CallBackPtr2();
	}
}