/********************************************************************************
 * File        : HPIR SENSOR PROGRAM.c
 * Description : PIR SENSOR Functions Implementation.
 * Author      : Eng: Omar Mohamed Ali 
 * Date        : 4/2/2022
 * Version     : 1.0.0
 *********************************************************************************/
/*********************************************************************************
                           << File Inclusions >>
**********************************************************************************/
#include "HPIR_SENSOR_INTERFACE.h"
#include "MDIO_INTERFACE.h"

/******************************************************************************
 * Prototype   : void HPIR_SENSOR_VidInit(void);
 * Description : this Function is used to Initialize PIR Sensor.
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void HPIR_SENSOR_VidInit(void)
{
	MDIO_ERROR_STATE_t_SetPinDirection(PIR_SENSOR_PIN, INPUT);
}


/******************************************************************************
 * Prototype   : void HPIR_SENSOR_VidInit(void);
 * Description : this Function is used to Initialize PIR Sensor.
 * Arguments   : Address of PIR Sensor Reading Variable.
 * return      : ERROR_STATE_t  -> 1-RET_OK
								   2-RET_NOK
								   3-RET_NULL_PTR
								   4-RET_OUT_OF_RANGE
 ******************************************************************************/
ERROR_STATE_t HPIR_SENSOR_ERROR_STATE_t_Read(u8 *Pu8PIR_SENSOR_Reading)
{
	ERROR_STATE_t LOC_ERROR_STATE_t_ReturnValue = RET_OK;
	if(Pu8PIR_SENSOR_Reading != NULL)
	{
		MDIO_ERROR_STATE_t_GetPin(PIR_SENSOR_PIN, Pu8PIR_SENSOR_Reading);
		LOC_ERROR_STATE_t_ReturnValue = RET_OK;
	}
	else
	{
		LOC_ERROR_STATE_t_ReturnValue = RET_NOK;
	}
	return LOC_ERROR_STATE_t_ReturnValue;
}
