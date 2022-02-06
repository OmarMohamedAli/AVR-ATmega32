/********************************************************************************
 * File        : HPIR SENSOR INTERFACE.h
 * Description : PIR SENSOR Functions Prototype.
 * Author      : Eng: Omar Mohamed Ali 
 * Date        : 4/2/2022
 * Version     : 1.0.0
 *********************************************************************************/
/*********************************************************************************
                           << File GUARD >>
**********************************************************************************/
#ifndef PIR_SENSOR_INTERFACE_H_
#define PIR_SENSOR_INTERFACE_H_

/*********************************************************************************
                           << File Inclusions >>
**********************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "HPIR_SENSOR_CFG.h"
#include "HPIR_SENSOR_PRIVATE.h"

/*********************************************************************************
                           << Functions Prototype >>
**********************************************************************************/
void HPIR_SENSOR_VidInit(void);
ERROR_STATE_t HPIR_SENSOR_ERROR_STATE_t_Read(u8 *Pu8PIR_SENSOR_Reading);

#endif /* PIR_SENSOR_INTERFAC_H_ */