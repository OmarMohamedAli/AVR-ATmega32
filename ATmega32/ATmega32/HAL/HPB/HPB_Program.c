
#include "HPB_INTERFACE.h"

ERROR_STATE_t HPB_ERROR_STATE_t_PB_Init(u8 COPY_u8PB_NO , Input_Pin_Mode_t COPY_u8PB_Mode )
{
	ERROR_STATE_t LOC_enuReturnValue = RET_OK;
	
	if(((COPY_u8PB_NO>=0)  && (COPY_u8PB_NO<=2)) && (( COPY_u8PB_Mode == PULL_UP) || ( COPY_u8PB_Mode == FLOAT))) 
	{
		switch(COPY_u8PB_NO)
		{
			case PB_1:
				MDIO_ERROR_STATE_t_SetPinDirection(PB7 , OUTPUT);
				MDIO_ERROR_STATE_t_SetPinValue(PB7 , LOW);
				MDIO_ERROR_STATE_t_SetPinDirection(PB1_PIN , INPUT);
				MDIO_ERROR_STATE_t_SetInputPinMode(PB1_PIN , COPY_u8PB_Mode);
				break;
				
			case PB_2:
				MDIO_ERROR_STATE_t_SetPinDirection(PB7 , OUTPUT);
				MDIO_ERROR_STATE_t_SetPinValue(PB7 , LOW);
				MDIO_ERROR_STATE_t_SetPinDirection(PB2_PIN , INPUT);
				MDIO_ERROR_STATE_t_SetInputPinMode(PB2_PIN , COPY_u8PB_Mode);
				break;
				
			case PB_3:
				MDIO_ERROR_STATE_t_SetPinDirection(PB7 , OUTPUT);
				MDIO_ERROR_STATE_t_SetPinValue(PB7 , LOW);
				MDIO_ERROR_STATE_t_SetPinDirection(PB3_PIN , INPUT);
				MDIO_ERROR_STATE_t_SetInputPinMode(PB3_PIN , COPY_u8PB_Mode);
				break;
		}// end of switch
		LOC_enuReturnValue = RET_OK;
	} // end of if
	else
	{
		LOC_enuReturnValue = RET_NOK;
	}
	return LOC_enuReturnValue;
}



ERROR_STATE_t HPB_ERROR_STATE_t_PB_Read(u8 COPY_u8PB_NO , u8 *Pu8Value)
{
	ERROR_STATE_t LOC_enuReturnValue = RET_OK;
	
	if(Pu8Value != NULL)
	{
		if((COPY_u8PB_NO>=0) && (COPY_u8PB_NO<=2))
		{
			switch(COPY_u8PB_NO)
			{
				case PB_1:
					LOC_enuReturnValue = MDIO_ERROR_STATE_t_GetPin(PB1_PIN ,Pu8Value);
					break;
				
				case PB_2:
					LOC_enuReturnValue = MDIO_ERROR_STATE_t_GetPin(PB2_PIN, Pu8Value);
					break;
				
				case PB_3:
					LOC_enuReturnValue = MDIO_ERROR_STATE_t_GetPin(PB3_PIN ,Pu8Value);
					break;
			}// end of switch
		} // end of Second if
		else
		{
			LOC_enuReturnValue = RET_NOK;
		}
	} // end of First if
	else
	{
		LOC_enuReturnValue = RET_NULL_PTR;
	}
	return LOC_enuReturnValue;
}
