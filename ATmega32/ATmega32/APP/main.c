/********************************************************************************
 * File        : Main.c
 * Description : Alarm System at [counter=99]
 *               Seven Segment, Buzzer & Relay APP.
 * Author      : Eng: Omar Mohamed Ali 
 * Date        : 5/2/2022
 * Version     : 1.0.0
 *********************************************************************************/
/*********************************************************************************
                           << File Inclusions >>
**********************************************************************************/
#define  F_CPU 16000000UL
#include <util/delay.h>
#include "HBUZZER_INTERFACE.h"
#include "HRELAY_INTERFACE.h"
#include "HSSD_INTERFACE.h"

u8 counter=0;
void Flashing(void);

int main(void)
{
	HBUZZER_VidINIT();
	HRELAY_VidInit(RELAY2);
	HSSD_VidInit();
	while (1)
	{
		while(counter < 100)
		{
			HSSD_VidDISPLAY(counter , 500);
			counter++;
			if(counter ==100)
			{
				Flashing();
				HBUZZER_VidOFF();
				HRELAY_VidOFF(RELAY2);
				counter =0;
			}
		}
	}
}

void Flashing(void)
{
	u8 i=0;
	while(i<=5)
	{
		HRELAY_VidOFF(RELAY2);
		HSSD_VidSSDON();
		HBUZZER_VidON();
		_delay_ms(500);
		HSSD_VidSSDOFF();
		HBUZZER_VidOFF();
		HRELAY_VidON(RELAY2);
		_delay_ms(500);
		i++;
	}
}