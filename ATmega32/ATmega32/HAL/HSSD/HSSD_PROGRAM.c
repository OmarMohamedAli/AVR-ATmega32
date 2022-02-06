
#include "HSSD_INTERFACE.h"
#include "MDIO_INTERFACE.h"
#define F_CPU 16000000UL
#include <util/delay.h>

void HSSD_VidInit(void)
{
	MDIO_ERROR_STATE_t_SetPinDirection(SSD_PINA,OUTPUT);
	MDIO_ERROR_STATE_t_SetPinDirection(SSD_PINB,OUTPUT);
	MDIO_ERROR_STATE_t_SetPinDirection(SSD_PINC,OUTPUT);
	MDIO_ERROR_STATE_t_SetPinDirection(SSD_PIND,OUTPUT);
	MDIO_ERROR_STATE_t_SetPinDirection(SSD_PINE,OUTPUT);
	MDIO_ERROR_STATE_t_SetPinDirection(SSD_PINF,OUTPUT);
	MDIO_ERROR_STATE_t_SetPinDirection(SSD_PING,OUTPUT);
	
	MDIO_ERROR_STATE_t_SetPinDirection(SSD_EN_PIN1,OUTPUT);
	MDIO_ERROR_STATE_t_SetPinDirection(SSD_EN_PIN2,OUTPUT);
}

void HSSD_VidWriteNumber(u8 Copy_u8NO)
{
	switch(Copy_u8NO)
	{
		case 0:
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINA, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINB, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINC, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PIND, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINE, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINF, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PING, LOW);
			break;
		
		case 1:
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINA, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINB, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINC, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PIND, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINE, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINF, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PING, LOW);
			break;
		
		case 2:
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINA, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINB, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINC, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PIND, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINE, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINF, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PING, HIGH);
			break;
		
		case 3:
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINA, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINB, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINC, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PIND, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINE, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINF, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PING, HIGH);
			break;
		
		case 4:
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINA, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINB, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINC, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PIND, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINE, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINF, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PING, HIGH);
			break;
		
		case 5:
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINA, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINB, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINC, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PIND, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINE, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINF, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PING, HIGH);
			break;
		
		case 6:
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINA, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINB, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINC, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PIND, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINE, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINF, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PING, HIGH);
			break;
		
		case 7:
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINA, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINB, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINC, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PIND, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINE, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINF, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PING, LOW);
			break;
		
		case 8:
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINA, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINB, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINC, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PIND, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINE, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINF, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PING, HIGH);
			break;
		
		case 9:
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINA, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINB, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINC, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PIND, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINE, LOW);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PINF, HIGH);
			MDIO_ERROR_STATE_t_SetPinValue(SSD_PING, HIGH);
			break;
		
		default:
			break;
	}
}

void HSSD_VidDISPLAY(u8 Copy_u8NO , u16 DiplayTime)
{
	u8 right_number = Copy_u8NO %10;
	u8 left_number = Copy_u8NO /10;
	
	u16 i;
	for(i=0 ; i<(DiplayTime/20) ;i++)
	{
		MDIO_ERROR_STATE_t_SetPinValue(SSD_EN_PIN1,HIGH);
		MDIO_ERROR_STATE_t_SetPinValue(SSD_EN_PIN2,LOW);
		HSSD_VidWriteNumber(right_number);
		_delay_ms(10);
		
		MDIO_ERROR_STATE_t_SetPinValue(SSD_EN_PIN1 ,LOW);
		MDIO_ERROR_STATE_t_SetPinValue(SSD_EN_PIN2 , HIGH);
		HSSD_VidWriteNumber(left_number);
		_delay_ms(10);
	}
		MDIO_ERROR_STATE_t_SetPinValue(SSD_EN_PIN1 ,LOW);
		MDIO_ERROR_STATE_t_SetPinValue(SSD_EN_PIN2 ,LOW);
}


void HSSD_VidSSDON(void)
{
	MDIO_ERROR_STATE_t_SetPinValue(SSD_EN_PIN1,HIGH);
	MDIO_ERROR_STATE_t_SetPinValue(SSD_EN_PIN2,HIGH);
}

void HSSD_VidSSDOFF(void)
{
	MDIO_ERROR_STATE_t_SetPinValue(SSD_EN_PIN1,LOW);
	MDIO_ERROR_STATE_t_SetPinValue(SSD_EN_PIN2,LOW);
}


void HSSD_VidCOUNT_DOWN(u8 Copy_u8NO)
{
	s8 i;
	for(i=Copy_u8NO ; i>=0 ;i--)
	{
		HSSD_VidDISPLAY(i, 500);
		_delay_ms(50);
	}
}

void HSSD_VidCOUNT_UP(u8 Copy_u8NO)
{
	u8 i;
	for(i=Copy_u8NO ; i<100 ;i++)
	{
		HSSD_VidDISPLAY(i , 500);
		_delay_ms(50);
	}
}