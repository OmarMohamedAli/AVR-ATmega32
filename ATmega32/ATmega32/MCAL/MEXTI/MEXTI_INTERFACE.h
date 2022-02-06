/********************************************************************************
 * File        : External Interrupt.h
 * Description : External Interrupt Functions Interface.
 * Author      : Eng: Omar Mohamed Ali 
 * Date        : 1/2/2022
 * Version     : 1.0.0
 *********************************************************************************/
/*********************************************************************************
                           << File Guard >>
**********************************************************************************/
#ifndef M_EXT_INT_INTERFACE_H_
#define M_EXT_INT_INTERFACE_H_
/*********************************************************************************
                           << File Inclusions >>
**********************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "MEXTI_PRIVATE.h"
#include "MEXTI_CONF.h" 

/*********************************************************************************
                          << For Global Interrupt >>  
**********************************************************************************/
/******************************************************************************
 * Prototype   : void MEXTI_VidEnableGlobalInterrupt(void);
 * Description : this Function is used to Enable Global Interrupt.
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI_VidEnableGlobalInterrupt(void);

/******************************************************************************
 * Prototype   : void MEXTI_VidDisbleGlobalInterrupt(void);
 * Description : this Function is used to Disable Global Interrupt.
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI_VidDisbleGlobalInterrupt(void);

/*********************************************************************************
                          << For External Interrupt_0 >>
**********************************************************************************/
/******************************************************************************
 * Prototype   : ERROR_STATE_t MEXTI0_ERROR_STATE_t_Init(EXT_INT_MODE_t Mode);
 * Description : this Function is used to Initialize External Interrupt[0].
 
 * Arguments   : EXT_INT_MODE_t -> 1-LOW_LEVEl
			                       2-ANY_LOGICAL_CHANGE
								   3-FALLING_EDGE
								   4-RISING_EDGE 
								   
 * return      : ERROR_STATE_t  -> 1-RET_OK
								   2-RET_NOK
								   3-RET_NULL_PTR
								   4-RET_OUT_OF_RANGE
 ******************************************************************************/
ERROR_STATE_t MEXTI0_ERROR_STATE_t_Init(EXT_INT_MODE_t Mode);

/******************************************************************************
 * Prototype   : void MEXTI0_Vid_ENABLE(void);
 * Description : this Function is used to Enable External Interrupt[0].
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI0_Vid_ENABLE(void);

/******************************************************************************
 * Prototype   : void MEXTI0_Vid_DISABLE(void);
 * Description : this Function is used to Disable External Interrupt[0].
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI0_Vid_DISABLE(void);

/******************************************************************************
 * Prototype   : ERROR_STATE_t MEXTI0_ERROR_STATE_t_ReadFlag(u8 *Pu8FlagValue);
 * Description : this Function is used to Read External Interrupt[0] Flag.
 * Arguments   : Address of Value Variable.
 * return      : ERROR_STATE_t  -> 1-RET_OK
								   2-RET_NOK
								   3-RET_NULL_PTR
								   4-RET_OUT_OF_RANGE
 ******************************************************************************/
ERROR_STATE_t MEXTI0_ERROR_STATE_t_ReadFlag(u8 *Pu8FlagValue);

/******************************************************************************
 * Prototype   : void MEXTI0_SetCallBack(void (* CopyFunPtr)(void));
 * Description : this Function is used to determine function that run when External Interrupt[0] is occurred.
 * Arguments   : function pointer to function that will be executed in main Program.
 * return      : Nothing.
 ******************************************************************************/
void  MEXTI0_SetCallBack(void (* CopyFunPtr)(void));

/******************************************************************************
 * Prototype   : void __vector_1(void);
 * Description : this Function is Called when External Interrupt[0] is occurred.
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void __vector_1(void) __attribute__((signal , used));



/*********************************************************************************
                          << For External Interrupt_1 >>
**********************************************************************************/
/******************************************************************************
 * Prototype   : ERROR_STATE_t MEXTI1_ERROR_STATE_t_Init(EXT_INT_MODE_t Mode);
 * Description : this Function is used to Initialize External Interrupt[1].
 
 * Arguments   : EXT_INT_MODE_t -> 1-LOW_LEVEl
			                       2-ANY_LOGICAL_CHANGE
								   3-FALLING_EDGE
								   4-RISING_EDGE 
								   
 * return      : ERROR_STATE_t  -> 1-RET_OK
								   2-RET_NOK
								   3-RET_NULL_PTR
								   4-RET_OUT_OF_RANGE
 ******************************************************************************/
ERROR_STATE_t MEXTI1_ERROR_STATE_t_Init(EXT_INT_MODE_t Mode);

/******************************************************************************
 * Prototype   : void MEXTI1_Vid_ENABLE(void);
 * Description : this Function is used to Enable External Interrupt[1].
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI1_Vid_ENABLE(void);

/******************************************************************************
 * Prototype   : void MEXTI1_Vid_DISABLE(void);
 * Description : this Function is used to Disable External Interrupt[1].
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI1_Vid_DISABLE(void);

/******************************************************************************
 * Prototype   : ERROR_STATE_t MEXTI1_ERROR_STATE_t_ReadFlag(u8 *Pu8FlagValue);
 * Description : this Function is used to Read External Interrupt[1] Flag.
 * Arguments   : Address of Value Variable.
 * return      : ERROR_STATE_t  -> 1-RET_OK
								   2-RET_NOK
								   3-RET_NULL_PTR
								   4-RET_OUT_OF_RANGE
 ******************************************************************************/
ERROR_STATE_t MEXTI1_ERROR_STATE_t_ReadFlag(u8 *Pu8FlagValue);

/******************************************************************************
 * Prototype   : void MEXTI1_SetCallBack(void (* CopyFunPtr)(void));
 * Description : this Function is used to determine function that run when External Interrupt[1] is occurred.
 * Arguments   : function pointer to function that will be executed in main Program.
 * return      : Nothing.
 ******************************************************************************/
void  MEXTI1_SetCallBack(void (* CopyFunPtr)(void));

/******************************************************************************
 * Prototype   : void __vector_2(void);
 * Description : this Function is Called when External Interrupt[1] is occurred.
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void __vector_2(void) __attribute__((signal , used));


/*********************************************************************************
                          << For External Interrupt_2 >>
**********************************************************************************/
/******************************************************************************
 * Prototype   : ERROR_STATE_t MEXTI2_ERROR_STATE_t_Init(EXT_INT_MODE_t Mode);
 * Description : this Function is used to Initialize External Interrupt[2].
 
 * Arguments   : EXT_INT_MODE_t -> 1-FALLING_EDGE
								   2-RISING_EDGE 
								   
 * return      : ERROR_STATE_t  -> 1-RET_OK
								   2-RET_NOK
								   3-RET_NULL_PTR
								   4-RET_OUT_OF_RANGE
 ******************************************************************************/
ERROR_STATE_t MEXTI2_ERROR_STATE_t_Init(EXT_INT_MODE_t Mode);

/******************************************************************************
 * Prototype   : void MEXTI2_Vid_ENABLE(void);
 * Description : this Function is used to Enable External Interrupt[2].
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI2_Vid_ENABLE(void);

/******************************************************************************
 * Prototype   : void MEXTI2_Vid_DISABLE(void);
 * Description : this Function is used to Disable External Interrupt[2].
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void MEXTI2_Vid_DISABLE(void);

/******************************************************************************
 * Prototype   : ERROR_STATE_t MEXTI2_ERROR_STATE_t_ReadFlag(u8 *Pu8FlagValue);
 * Description : this Function is used to Read External Interrupt[2] Flag.
 * Arguments   : Address of Value Variable.
 * return      : ERROR_STATE_t  -> 1-RET_OK
								   2-RET_NOK
								   3-RET_NULL_PTR
								   4-RET_OUT_OF_RANGE
 ******************************************************************************/
ERROR_STATE_t MEXTI2_u8ReadFlag(u8 *Pu8FlagValue);

/******************************************************************************
 * Prototype   : void MEXTI2_SetCallBack(void (* CopyFunPtr)(void));
 * Description : this Function is used to determine function that run when External Interrupt[2] is occurred.
 * Arguments   : function pointer to function that will be executed in main Program.
 * return      : Nothing.
 ******************************************************************************/
void  MEXTI2_SetCallBack(void (* CopyFunPtr)(void));

/******************************************************************************
 * Prototype   : void __vector_3(void);
 * Description : this Function is Called when External Interrupt[2] is occurred.
 * Arguments   : Nothing.
 * return      : Nothing.
 ******************************************************************************/
void __vector_3(void) __attribute__((signal , used));


#endif /* M_EXT_INT_INTERFACE_H_ */