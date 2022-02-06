

#ifndef HSTEPPER_INTERFACE_H_
#define HSTEPPER_INTERFACE_H_

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "HSTEPPER_CFG.h"
#include "HSTEPPER_PRIVATE.h"

void HSTEPPER_VidInit(void);
void HSTEPPER_VidFullStepRight(void);
void HSTEPPER_VidFullStepLeft(void);
void HSTEPPER_VidHalfStepRight(void);
void HSTEPPER_VidHalfStepLeft(void);
void HSTEPPER_VidFullStep_FullMechanicalRevolutionRight(void);
void HSTEPPER_VidFullStep_FullMechanicalRevolutionLeft(void);
void HSTEPPER_VidHalfStep_FullMechanicalRevolutionRight(void);
void HSTEPPER_VidHalfStep_FullMechanicalRevolutionLeft(void);
void HSTEPPER_VidFullStep_StartRight(u8 Copy_u8NumberOfSteps);
void HSTEPPER_VidFullStep_StartLeft(u8 Copy_u8NumberOfSteps);
void HSTEPPER_VidHalfStep_StartRight(u8 Copy_u8NumberOfSteps);
void HSTEPPER_VidHalfStep_StartLeft(u8 Copy_u8NumberOfSteps);
void HSTEPPER_VidStop(void);



#endif /* HSTEPPER_INTERFACE_H_ */