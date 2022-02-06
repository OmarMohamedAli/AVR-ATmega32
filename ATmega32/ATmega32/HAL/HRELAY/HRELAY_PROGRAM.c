

#include "MDIO_INTERFACE.h"
#include "HRELAY_INTERFACE.h"


void HRELAY_VidInit(u8 Copy_u8RelayNumber)
{
	if(Copy_u8RelayNumber == RELAY1)
		MDIO_ERROR_STATE_t_SetPinDirection( RELAY_PIN1 ,OUTPUT);
	else
		MDIO_ERROR_STATE_t_SetPinDirection( RELAY_PIN2 ,OUTPUT);
}


void HRELAY_VidON(u8 Copy_u8RelayNumber)
{
	if(Copy_u8RelayNumber == RELAY1)
		MDIO_ERROR_STATE_t_SetPinValue(RELAY_PIN1,HIGH);
	else
		MDIO_ERROR_STATE_t_SetPinValue(RELAY_PIN2,HIGH);
}


void HRELAY_VidOFF(u8 Copy_u8RelayNumber)
{
	if(Copy_u8RelayNumber == RELAY1)
		MDIO_ERROR_STATE_t_SetPinValue(RELAY_PIN1,LOW);
	else
		MDIO_ERROR_STATE_t_SetPinValue(RELAY_PIN2,LOW);
}


void HRELAY_VidTOGGLE(u8 Copy_u8RelayNumber)
{
	if(Copy_u8RelayNumber == RELAY1)
		MDIO_ERROR_STATE_t_TogglePin(RELAY_PIN1);
	else
		MDIO_ERROR_STATE_t_TogglePin(RELAY_PIN2);
} 
