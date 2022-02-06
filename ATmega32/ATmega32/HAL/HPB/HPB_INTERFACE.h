

#ifndef HPB_INTERFACE_H_
#define HPB_INTERFACE_H_

#include "STD_TYPES.h"
#include "MDIO_INTERFACE.h"
#include "HPB_CONF.h"
#include "HPB_PRIVATE.h"

ERROR_STATE_t HPB_ERROR_STATE_t_PB_Init(u8 COPY_u8PB_NO , Input_Pin_Mode_t COPY_u8PB_Mode );
ERROR_STATE_t HPB_ERROR_STATE_t_PB_Read(u8 COPY_u8PB_NO , u8 *Pu8Value);

#endif /* HPUSH_BUTTON_INTERFACE_H_ */