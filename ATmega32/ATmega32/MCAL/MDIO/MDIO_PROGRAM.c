

#include "MDIO_INTERFACE.h"

// Mode -> output   , Input
ERROR_STATE_t MDIO_ERROR_STATE_t_SetPinDirection(u8 Copy_u8PinNo , Pin_Mode_t Copy_enuPin_Mode)
{
	ERROR_STATE_t LOC_ERROR_STATE_t_ReturnValue = RET_OK;
	u8 LOC_u8pin = Copy_u8PinNo %10;
	u8 LOC_u8port = Copy_u8PinNo /10;
	
	if((LOC_u8pin>=0) && (LOC_u8pin<=7) && (LOC_u8port>=1) && (LOC_u8port<=4) && ((Copy_enuPin_Mode == OUTPUT) || ((Copy_enuPin_Mode == INPUT))))
	{
			switch(LOC_u8port)
			{
				case A:
					if(Copy_enuPin_Mode == OUTPUT)
					{
						SET_BIT(DDRA,LOC_u8pin);
					}
					else
					{
						CLEAR_BIT(DDRA,LOC_u8pin);
					}
					break;
				
				case B:
					if(Copy_enuPin_Mode == OUTPUT)
					{
						SET_BIT(DDRB, LOC_u8pin);
					}
					else
					{
						CLEAR_BIT(DDRB, LOC_u8pin);
					}
					break;
				
				case C:
					if(Copy_enuPin_Mode == OUTPUT)
					{
						SET_BIT(DDRC, LOC_u8pin);
					}
					else
					{
						CLEAR_BIT(DDRC, LOC_u8pin);
					}
					break;
				
				case D:
					if(Copy_enuPin_Mode == OUTPUT)
					{
						SET_BIT(DDRD, LOC_u8pin);
					}
					else
					{
						CLEAR_BIT(DDRD, LOC_u8pin);
					}
					break;
				
				default:
					break;
			}  // end switch
			LOC_ERROR_STATE_t_ReturnValue = RET_OK;
	}  // end if
	
	
	else
	{
		LOC_ERROR_STATE_t_ReturnValue =RET_NOK;
	}
	return LOC_ERROR_STATE_t_ReturnValue;
}


// State -> HIGH   , LOW
ERROR_STATE_t MDIO_ERROR_STATE_t_SetPinValue(u8 Copy_u8PinNo , Pin_State_t Copy_enuPin_State)
{
	ERROR_STATE_t LOC_ERROR_STATE_t_ReturnValue = RET_OK;
	u8 LOC_u8pin = Copy_u8PinNo %10;
	u8 LOC_u8port = Copy_u8PinNo /10;
		
	if((LOC_u8pin>=0) && (LOC_u8pin<=7) && (LOC_u8port>=1) && (LOC_u8port<=4) && ((Copy_enuPin_State == HIGH) || ((Copy_enuPin_State == LOW))))
	{
		switch(LOC_u8port)
		{
			case A:
				if(Copy_enuPin_State == HIGH)
				{
					SET_BIT(PORTA,LOC_u8pin);
				}
				else
				{
					CLEAR_BIT(PORTA,LOC_u8pin);
				}
				break;
			
			case B:
				if(Copy_enuPin_State == HIGH)
				{
					SET_BIT(PORTB, LOC_u8pin);
				}
				else
				{
					CLEAR_BIT(PORTB, LOC_u8pin);
				}
				break;
			
			case C:
				if(Copy_enuPin_State == HIGH)
				{
					SET_BIT(PORTC, LOC_u8pin);
				}
				else
				{
					CLEAR_BIT(PORTC, LOC_u8pin);
				}
				break;
			
			case D:
				if(Copy_enuPin_State == HIGH)
				{
					SET_BIT(PORTD, LOC_u8pin);
				}
				else
				{
					CLEAR_BIT(PORTD, LOC_u8pin);
				}
				break;
			
			default:
				break;
		} // end switch
		LOC_ERROR_STATE_t_ReturnValue = RET_OK;
	} // end if
	
	else
	{
		LOC_ERROR_STATE_t_ReturnValue =RET_NOK;
	}
	return LOC_ERROR_STATE_t_ReturnValue;
}


ERROR_STATE_t MDIO_ERROR_STATE_t_TogglePin(u8 Copy_u8PinNo)
{
	ERROR_STATE_t LOC_ERROR_STATE_t_ReturnValue = RET_OK;
	u8 LOC_u8pin = Copy_u8PinNo %10;
	u8 LOC_u8port = Copy_u8PinNo /10;
	
	if((LOC_u8pin>=0) && (LOC_u8pin<=7) && (LOC_u8port>=1) && (LOC_u8port<=4))
	{
		switch(LOC_u8port)
		{
			case A:
				TOGGLE_BIT(PORTA, LOC_u8pin);
				break;
		
			case B:
				TOGGLE_BIT(PORTB, LOC_u8pin);
				break;
			
			case C:
				TOGGLE_BIT(PORTC, LOC_u8pin);
				break;
			
			case D:
				TOGGLE_BIT(PORTD, LOC_u8pin);
				break;
		
			default:
				break;
		} // end switch
		LOC_ERROR_STATE_t_ReturnValue = RET_OK;
	} // end if
	
	else
	{
		LOC_ERROR_STATE_t_ReturnValue =RET_NOK;
	}
	return LOC_ERROR_STATE_t_ReturnValue;
}


ERROR_STATE_t MDIO_ERROR_STATE_t_GetPin(u8 Copy_u8PinNo , u8 *Pu8vlaue)
{
	ERROR_STATE_t LOC_ERROR_STATE_t_ReturnValue = RET_OK;
	u8 LOC_u8pin = Copy_u8PinNo %10;
	u8 LOC_u8port = Copy_u8PinNo /10;
	
	if(Pu8vlaue != NULL)
	{
		if((LOC_u8pin>=0) && (LOC_u8pin<=7) && (LOC_u8port>=1) && (LOC_u8port<=4))
		{
			switch(LOC_u8port)
			{
				case A:
					*Pu8vlaue = GET_BIT(PINA, LOC_u8pin);
					break;
			
				case B:
					*Pu8vlaue = GET_BIT(PINB, LOC_u8pin);
					break;
			
				case C:
					*Pu8vlaue = GET_BIT(PINC, LOC_u8pin);
					break;
			
				case D:
					*Pu8vlaue = GET_BIT(PIND, LOC_u8pin);
					break;
			
				default:
					break;
			} // end switch
			LOC_ERROR_STATE_t_ReturnValue = RET_OK;
		} // end of Second if
		else
		{
			LOC_ERROR_STATE_t_ReturnValue =RET_NOK;
		}
		
	} // end of first if 
	else
	{
		LOC_ERROR_STATE_t_ReturnValue =RET_NULL_PTR;
	}
	return LOC_ERROR_STATE_t_ReturnValue;
}


ERROR_STATE_t MDIO_ERROR_STATE_t_SetInputPinMode(u8 Copy_u8PinNo ,Input_Pin_Mode_t Copy_enuInputPin_Mode)
{
	ERROR_STATE_t LOC_ERROR_STATE_t_ReturnValue = RET_OK;
	u8 LOC_u8pin = Copy_u8PinNo %10;
	u8 LOC_u8port = Copy_u8PinNo /10;
	
	if((LOC_u8pin>=0) && (LOC_u8pin<=7) && (LOC_u8port>=1) && (LOC_u8port<=4) && ((Copy_enuInputPin_Mode == PULL_UP) || (Copy_enuInputPin_Mode == FLOAT)))
	{
		switch(LOC_u8port)
		{
			case A:
				if(Copy_enuInputPin_Mode == PULL_UP)
				{
					SET_BIT(PORTA, LOC_u8pin);
				}
				else
				{
					CLEAR_BIT(PORTA, LOC_u8pin);
				}
				break;
			
			case B:
				if(Copy_enuInputPin_Mode == PULL_UP)
				{
					SET_BIT(PORTB, LOC_u8pin);
				}
				else
				{
					CLEAR_BIT(PORTB, LOC_u8pin);
				}
				break;
			
			case C:
				if(Copy_enuInputPin_Mode == PULL_UP)
				{
					SET_BIT(PORTC, LOC_u8pin);
				}
				else
				{
					CLEAR_BIT(PORTC, LOC_u8pin);
				}
				break;
			
			case D:
				if(Copy_enuInputPin_Mode == PULL_UP)
				{
					SET_BIT(PORTD, LOC_u8pin);
				}
				else
				{
					CLEAR_BIT(PORTD, LOC_u8pin);
				}
				break;
			
			default:
				break;
		} // end switch
		LOC_ERROR_STATE_t_ReturnValue = RET_OK;
	} // end if
	
	else
	{
		LOC_ERROR_STATE_t_ReturnValue =RET_NOK;
	}
	return LOC_ERROR_STATE_t_ReturnValue;
}