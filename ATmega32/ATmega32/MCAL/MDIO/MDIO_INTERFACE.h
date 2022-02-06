
#ifndef MDIO_INTERFACE_H_
#define MDIO_INTERFACE_H_

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "MDIO_PRIVATE.h"
#include "MDIO_CONF.h"

// Mode -> output   , Input
ERROR_STATE_t MDIO_ERROR_STATE_t_SetPinDirection(u8 Copy_u8PinNo , Pin_Mode_t Copy_enuPin_Mode);

// State -> HIGH   , LOW
ERROR_STATE_t MDIO_ERROR_STATE_t_SetPinValue(u8 Copy_u8PinNo , Pin_State_t Copy_enuPin_State);


ERROR_STATE_t MDIO_ERROR_STATE_t_TogglePin(u8 Copy_u8PinNo);
ERROR_STATE_t MDIO_ERROR_STATE_t_GetPin(u8 Copy_u8PinNo , u8 *Pu8vlaue);
ERROR_STATE_t MDIO_ERROR_STATE_t_SetInputPinMode(u8 Copy_u8PinNo ,Input_Pin_Mode_t Copy_enuInputPin_Mode);

#endif /* DIO_INTERFACE_H_ */