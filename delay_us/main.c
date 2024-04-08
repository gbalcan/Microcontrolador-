#include "config.c"
#include "def_pinos.h"

void delay_us(unsigned int t)
{
	TR0 = 0;
	TF0 = 0;
	TMOD &= 0xFC;
	TMOD |= 0x02;
	TL0 = 0xE7;
	TH0 = 0xE7;
	TR0 = 1;

	while(t)
	{
		while (TF0 != 1);
		TF0 = 0;
		t--;
	}
}

void main (void)
{
	Init_Device();
	SFRPAGE = LEGACY_PAGE;
	P0=0; //apaga leds
	while(1)
	{
		P0_0 = 1;
		delay_us(50000);
		P0_0 = 0;
		delay_us(50000);
	}
}