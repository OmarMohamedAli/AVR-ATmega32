
#include "HLED_INTERFACE.h"

ERROR_STATE_t HLED_ERROR_STATE_t_LedInit(u8 COPY_u8Led)
{
	ERROR_STATE_t LOC_ERROR_STATE_t_ReturnValue = RET_OK;
	
	if((COPY_u8Led>=0) && (COPY_u8Led<=2))
	{
		switch(COPY_u8Led)
		{
			case B_LED:
				LOC_ERROR_STATE_t_ReturnValue = MDIO_ERROR_STATE_t_SetPinDirection(B_LED_PIN ,OUTPUT);
				break;
			
			case G_LED:
				LOC_ERROR_STATE_t_ReturnValue = MDIO_ERROR_STATE_t_SetPinDirection(G_LED_PIN ,OUTPUT);
				break;
			
			case R_LED:
				LOC_ERROR_STATE_t_ReturnValue = MDIO_ERROR_STATE_t_SetPinDirection(R_LED_PIN ,OUTPUT);
				break;
			
			default:
				break;
		} // end switch
	} // end if
	
	else
	{
		LOC_ERROR_STATE_t_ReturnValue =RET_NOK;
	}
	return LOC_ERROR_STATE_t_ReturnValue;
}


ERROR_STATE_t HLED_ERROR_STATE_t_LedON(u8 COPY_u8Led)
{
	ERROR_STATE_t LOC_enuReturnValue = RET_OK;

	if((COPY_u8Led>=0) && (COPY_u8Led<=2))
	{
		switch(COPY_u8Led)
		{
			case B_LED:
				LOC_enuReturnValue = MDIO_ERROR_STATE_t_SetPinValue(B_LED_PIN ,HIGH);
				break;
				
			case G_LED:
				LOC_enuReturnValue = MDIO_ERROR_STATE_t_SetPinValue(G_LED_PIN ,HIGH);
				break;
				
			case R_LED:
				LOC_enuReturnValue = MDIO_ERROR_STATE_t_SetPinValue(R_LED_PIN ,HIGH);
				break;
				
			default:
				break;
		} // end switch
	} // end if
		
	else
	{
		LOC_enuReturnValue =RET_NOK;
	}
	return LOC_enuReturnValue;
}


ERROR_STATE_t HLED_ERROR_STATE_t_LedOFF(u8 COPY_u8Led)
{
	ERROR_STATE_t LOC_enuReturnValue = RET_OK;

	if((COPY_u8Led>=0) && (COPY_u8Led<=2))
	{
		switch(COPY_u8Led)
		{
			case B_LED:
				LOC_enuReturnValue = MDIO_ERROR_STATE_t_SetPinValue(B_LED_PIN ,LOW);
				break;
			
			case G_LED:
				LOC_enuReturnValue = MDIO_ERROR_STATE_t_SetPinValue(G_LED_PIN ,LOW);
				break;
			
			case R_LED:
				LOC_enuReturnValue = MDIO_ERROR_STATE_t_SetPinValue(R_LED_PIN ,LOW);
				break;
			
			default:
				break;
		} // end switch
	} // end if
	
	else
	{
		LOC_enuReturnValue =RET_NOK;
	}
	return LOC_enuReturnValue;
}



ERROR_STATE_t HLED_ERROR_STATE_t_ToggleLed(u8 COPY_u8Led)
{
	ERROR_STATE_t LOC_enuReturnValue = RET_OK;

	if((COPY_u8Led>=0) && (COPY_u8Led<=2))
	{
		switch(COPY_u8Led)
		{
			case B_LED:
			LOC_enuReturnValue = MDIO_ERROR_STATE_t_TogglePin(B_LED_PIN);
			break;
				
			case G_LED:
			LOC_enuReturnValue = MDIO_ERROR_STATE_t_TogglePin(G_LED_PIN);
			break;
				
			case R_LED:
			LOC_enuReturnValue = MDIO_ERROR_STATE_t_TogglePin(R_LED_PIN);
			break;
				
			default:
			break;
		} // end switch
	} // end if
		
	else
	{
		LOC_enuReturnValue =RET_NOK;
	}
	return LOC_enuReturnValue;
}