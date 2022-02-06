
#ifndef M_EXT_INT_PRIVATE_H_
#define M_EXT_INT_PRIVATE_H_

#include "Common_Registers.h"

/* External Interrupt Addresses */
#define GICR    (*(volatile u8*)0x5B)
#define GIFR    (*(volatile u8*)0x5A)
#define MCUCR   (*(volatile u8*)0x55)
#define MCUCSR  (*(volatile u8*)0x54)


typedef enum{ LOW_LEVEL=0 , ANY_LOGICAL_CHANGE , FALLING_EDGE , RISING_EDGE }EXT_INT_MODE_t;

#endif /* M_EXT_INT_PRIVATE_H_ */