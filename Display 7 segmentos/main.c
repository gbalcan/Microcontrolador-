#include "config.c"
#include "def_pinos.h"

#define	DISP_E	P1_0
#define DISP_D 	P1_1
#define SEGS	P0
#define PONTO	P0_7
#define LIG		0
#define DES		1

__code unsigned char
disp7[12] = {0x7E, 0x30, 0x6D, 0x79, 0x33, 0x5B, 0x5F, 0x70, 0x7F, 0x7B, 0x00, 0xFF};

/*void esc_disp7(unsigned char alg, char dp)
{
	DISP_D = LIG;
	DISP_E = DES;

	if(alg <12) 
		SEGS = disp7[alg];
	else
		SEGS = 0x4F;

	if(alg == 11)
		dp = 1;
	
	if(dp)
		PONTO = 1;
	else
		PONTO = 0;
}*/

volatile unsigned char led_e, led_d;

void funcao_isr(void) __interrupt 5
{
	if (DISP_D == DES)
	{
		DISP_D = LIG;
		P0 = disp7[led_d];
		DISP_E = DES;
		
	}
	else
	{
		DISP_D = DES;
		P0 = disp7[led_e];
		DISP_E = LIG;
	}
}

void esc_disp7s(unsigned int num_vis)
{
	DISP_D = LIG;
	DISP_E = LIG;

	if(num_vis <100)
	{
		led_d = num_vis % 10;
		led_e = num_vis / 10;
	}
	else
		P0 = 0x4F;
}

void delay_ms(unsigned int t)
{
	TMOD &= 0xFC;
	TMOD |= 0x01;

	while(t)
	{
		TR0 = 0;
		TF0 = 0;
		TL0 = 0x58;
		TH0 = 0x9E;
		TR0 = 1;
		
		while (TF0 != 1);

		t--;
	}
}


void main()
{
	unsigned int i;
	Init_Device();
	SFRPAGE = LEGACY_PAGE;
	

	for(i = 0; i < 100; i++)
	{
		esc_disp7s(i);
		delay_ms(250);
	}

	/*esc_disp7(0, 0);	// Exercicio 1
	delay_ms(500);

	esc_disp7(1, 0);
	delay_ms(500);

	esc_disp7(2, 0);
	delay_ms(500);

	esc_disp7(3, 0);
	delay_ms(500);

	esc_disp7(4, 0);
	delay_ms(500);

	esc_disp7(5, 0);
	delay_ms(500);

	esc_disp7(6, 0);
	delay_ms(500);

	esc_disp7(7, 0);
	delay_ms(500);

	esc_disp7(8, 0);
	delay_ms(500);

	esc_disp7(9, 0);
	delay_ms(500);

	esc_disp7(10, 0);
	delay_ms(500);

	esc_disp7(11, 0);
	delay_ms(500);

	esc_disp7(12, 0);
	delay_ms(500);*/ 
}