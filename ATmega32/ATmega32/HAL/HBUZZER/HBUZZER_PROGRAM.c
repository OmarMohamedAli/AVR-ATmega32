

#include "MDIO_INTERFACE.h"
#include "HBUZZER_INTERFACE.h"
#define F_CPU 16000000UL
#include <util/delay.h>

void HBUZZER_VidINIT(void)
{
	MDIO_ERROR_STATE_t_SetPinDirection( BUZZER_PIN, OUTPUT);
}

void HBUZZER_VidON(void)
{
	MDIO_ERROR_STATE_t_SetPinValue(BUZZER_PIN,HIGH);
}

void HBUZZER_VidOFF(void)
{
	MDIO_ERROR_STATE_t_SetPinValue(BUZZER_PIN,LOW);
}

void HBUZZER_VidONCE(void)
{
	MDIO_ERROR_STATE_t_SetPinValue(BUZZER_PIN,HIGH);
	_delay_ms(300);
	MDIO_ERROR_STATE_t_SetPinValue(BUZZER_PIN,LOW);
	_delay_ms(300);
}


void HBUZZER_VidTWICE(void)
{
	HBUZZER_VidONCE();
	HBUZZER_VidONCE();
}

void HBUZZER_VidTRIPLE(void)
{
	HBUZZER_VidONCE();
	HBUZZER_VidONCE();
	HBUZZER_VidONCE();
}

void HBUZZER_VidLONG(void)
{
	MDIO_ERROR_STATE_t_SetPinValue(BUZZER_PIN,HIGH);
	_delay_ms(600);
	MDIO_ERROR_STATE_t_SetPinValue(BUZZER_PIN,LOW);
}

void HBUZZER_VidTOGGLE(void)
{
	MDIO_ERROR_STATE_t_TogglePin(BUZZER_PIN);

}