

#ifndef HSSD_INTERFACE_H_
#define HSSD_INTERFACE_H_

#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "HSSD_CFG.h"
#include "HSSD_PRIVATE.h"


void HSSD_VidInit(void);
void HSSD_VidWriteNumber(u8 Copy_u8NO);
void HSSD_VidDISPLAY(u8 Copy_u8NO , u16 DiplayTime);
void HSSD_VidSSDON(void);
void HSSD_VidSSDOFF(void);
void HSSD_VidCOUNT_DOWN(u8 Copy_u8NO);
void HSSD_VidCOUNT_UP(u8 Copy_u8NO);



#endif /* HSSD_INTERFACE_H_ */