

#ifndef HRELAY_INTERFACE_H_
#define HRELAY_INTERFACE_H_

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "HRELAY_CFG.h"
#include "HRELAY_PRIVATE.h"

void HRELAY_VidInit(u8 Copy_u8RelayNumber);
void HRELAY_VidON(u8 Copy_u8RelayNumber);
void HRELAY_VidOFF(u8 Copy_u8RelayNumber);
void HRELAY_VidTOGGLE(u8 Copy_u8RelayNumber);

#endif /* HRELAY_INTERFACE_H_ */