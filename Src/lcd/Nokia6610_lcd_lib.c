#include "stm32f4xx.h"
#include "Nokia6610_lcd_lib.h"
#include "Nokia6610_fnt8x8.h"

void _delay_ms(int t)
{
	int i;
	for (i = 0; i < t * 100; i++)
	{
	}
}

void _delay_us(int t)
{
	int i;
	for (i = 0; i < t; i++)
	{
	}
}

void nlcd_Init(void)   //  Р пїЅР Р…Р С‘РЎвЂ Р С‘Р В°Р В»Р С‘Р В·Р В°РЎвЂ Р С‘РЎРЏ Р С”Р С•Р Р…РЎвЂљРЎР‚Р С•Р В»Р В»Р ВµРЎР‚Р В° PCF8833
{
//  Р пїЅР Р…Р С‘РЎвЂ Р С‘Р В°Р В»Р С‘Р В·Р С‘РЎР‚РЎС“Р ВµР С� Р С—Р С•РЎР‚РЎвЂљ Р Р…Р В° Р Р†РЎвЂ№Р Р†Р С•Р Т‘ Р Т‘Р В»РЎРЏ РЎР‚Р В°Р В±Р С•РЎвЂљРЎвЂ№ РЎРѓ LCD-Р С”Р С•Р Р…РЎвЂљРЎР‚Р С•Р В»Р В»Р ВµРЎР‚Р С•Р С�
	CS_LCD_SET;
	_delay_ms(100);
	CS_LCD_RESET;
	SDA_LCD_RESET;
	SCLK_LCD_SET;

	RST_LCD_SET;       //     **********************************************
	RST_LCD_RESET;    //     *                                             *
	_delay_ms(20);   //     *  Р вЂ”Р В°Р Т‘Р ВµРЎР‚Р В¶Р С”Р В° Р Т‘Р В»РЎРЏ Р С•РЎвЂљРЎР‚Р В°Р В±Р С•РЎвЂљР С”Р С‘ Р В°Р С—Р В°РЎР‚Р В°РЎвЂљР Р…Р С•Р С–Р С• РЎРѓР В±РЎР‚Р С•РЎРѓР В°   *
	RST_LCD_SET;      //     *                                             *
	_delay_ms(20);    //     **********************************************
	SCLK_LCD_SET;
	SDA_LCD_SET;
	SCLK_LCD_SET;

	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_SWRESET);   //    Р СџРЎР‚Р С•Р С–РЎР‚Р В°Р С�Р С�Р Р…РЎвЂ№Р в„– РЎРѓР В±РЎР‚Р С•РЎРѓ
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_SLEEPOUT);  //    Р вЂ™РЎвЂ№РЎвЂ¦Р С•Р Т‘ Р С‘Р В· РЎР‚Р ВµР В¶Р С‘Р С�Р В° РЎРѓР Р…Р В°
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_BSTRON); //    Р вЂ™Р С”Р В». Р С—Р С•Р Р†РЎвЂ№РЎв‚¬Р В°РЎР‹РЎвЂ°Р С‘Р в„– Р С—РЎР‚Р ВµР С•Р В±РЎР‚Р В°Р В·Р С•Р Р†Р В°РЎвЂљР ВµР В»РЎРЉ Р Р…Р В°Р С—РЎР‚РЎРЏР В¶Р ВµР Р…Р С‘РЎРЏ
	_delay_ms(100); //    Р вЂ”Р В°Р Т‘Р ВµРЎР‚Р В¶Р С”Р В° Р Т‘Р В»РЎРЏ Р С•РЎвЂљРЎР‚Р В°Р В±Р С•РЎвЂљР С”Р С‘ Р С”Р С•Р С�Р В°Р Р…Р Т‘РЎвЂ№ Р С‘ Р Р†РЎвЂ№РЎР‚Р В°Р Р†Р Р…Р С‘Р Р†Р В°Р Р…Р С‘РЎРЏ Р Р…Р В°Р С—РЎР‚РЎРЏР В¶Р ВµР Р…Р С‘РЎРЏ
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_DISPON);    //    Р вЂќР С‘РЎРѓР С—Р В»Р ВµР в„– Р Р†Р С”Р В».
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_NORON);     //    Р вЂќР С‘РЎРѓР С—Р В»Р ВµР в„– Р Р…Р С•РЎР‚Р С�Р В°Р В»РЎРЉР Р…РЎвЂ№Р в„– - Р Р†Р С”Р В».
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_PASET); //    Р Р€РЎРѓРЎвЂљР В°Р Р…Р С•Р Р†Р С”Р В° Р Р…Р В°РЎвЂЎР В°Р В»РЎРЉР Р…Р С•Р С–Р С• Р С‘ Р С”Р С•Р Р…Р ВµРЎвЂЎР Р…Р С•Р С–Р С• Р В°Р Т‘РЎР‚Р ВµРЎРѓР В° Р С”Р С•Р В»Р С•Р Р…Р С”Р С‘
	nlcd_SendByte(DATA_LCD_MODE, 0);                     //
	nlcd_SendByte(DATA_LCD_MODE, 0x83);                  //
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_CASET); //     Р Р€РЎРѓРЎвЂљР В°Р Р…Р С•Р Р†Р С”Р В° Р Р…Р В°РЎвЂЎР В°Р В»РЎРЉР Р…Р С•Р С–Р С• Р С‘ Р С”Р С•Р Р…Р ВµРЎвЂЎР Р…Р С•Р С–Р С• Р В°Р Т‘РЎР‚Р ВµРЎРѓР В° РЎРѓРЎвЂљРЎР‚Р В°Р Р…Р С‘РЎвЂ РЎвЂ№
	nlcd_SendByte(DATA_LCD_MODE, 0);                     //
	nlcd_SendByte(DATA_LCD_MODE, 0x83);                  //
	_delay_ms(5);
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_RAMWR);     //     Р вЂ”Р В°Р С—Р С‘РЎРѓРЎРЉ Р Т‘Р В°Р Р…Р Р…РЎвЂ№РЎвЂ¦ Р Р† RAM Р Т‘Р С‘РЎРѓР С—Р В»Р ВµРЎРЏ
	_delay_ms(50);                                      //     Р СњР ВµР С�Р Р…Р С•Р С–Р С• Р В¶Р Т‘Р ВµР С�
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_INVOFF);    //    Р пїЅР Р…Р Р†Р ВµРЎР‚РЎРѓР С‘РЎРЏ Р Р†РЎвЂ№Р Р†Р С•Р Т‘Р В° РЎвЂ Р Р†Р ВµРЎвЂљР С•Р Р† - Р Р†РЎвЂ№Р С”Р В»РЎР‹РЎвЂЎР ВµР Р…Р В°
														 //    ******************************************************
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_COLMOD);    //   *               Р вЂ™РЎвЂ№Р Р†Р С•Р Т‘ РЎвЂ Р Р†Р ВµРЎвЂљР В°:                          *
	nlcd_SendByte(DATA_LCD_MODE, 0x03);                  //  *     12 Р В±Р С‘РЎвЂљ Р Р…Р В° Р С—Р С‘Р С”РЎРѓР ВµР В»РЎРЉ- 4096 РЎвЂ Р Р†Р ВµРЎвЂљР С•Р Р† RGB 3:3:2          *
														 //  **********************************************************
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_MADCTL); //    Р С™Р С•Р С�Р В°Р Р…Р Т‘Р В° Р Т‘Р С•РЎРѓРЎвЂљРЎС“Р С—Р В° Р С” РЎС“РЎРѓР В»Р С•Р Р†Р С‘РЎРЏР С� Р С•РЎвЂљР С•Р В±РЎР‚Р В°Р В¶Р ВµР Р…Р С‘РЎРЏ Р С—Р В°Р С�РЎРЏРЎвЂљР С‘ RAM
	nlcd_SendByte(DATA_LCD_MODE, 0x00); //   1-byte, Р С—Р С• РЎС“Р С�Р С•Р В»РЎвЂЎР В°Р Р…Р С‘РЎР‹ 0РЎвЂ¦00 - Р С”РЎС“РЎР‚Р С‘Р С� Р Р†Р Р…Р С‘Р С�Р В°РЎвЂљР ВµР В»РЎРЉР Р…Р С• Р Т‘Р В°РЎвЂљР В°РЎв‚¬Р С‘РЎвЂљ
										//                Р Р…Р В° РЎРѓРЎвЂљРЎР‚. 43
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_SETCON);   //            Р С™Р С•Р Р…РЎвЂљРЎР‚Р В°РЎРѓРЎвЂљР Р…Р С•РЎРѓРЎвЂљРЎРЉ
	nlcd_SendByte(DATA_LCD_MODE, 0x3C);                 //         0x00-min   0x3F-max
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_DISPOFF); //     Р вЂ™РЎвЂ№Р С”Р В»РЎР‹РЎвЂЎР В°Р ВµР С� Р Т‘Р С‘РЎРѓР С—Р В»Р ВµР в„– РЎвЂЎРЎвЂљР С•Р В±РЎвЂ№ Р Р…Р Вµ Р Р…Р В°Р В±Р В»РЎР‹Р Т‘Р В°РЎвЂљРЎРЉ Р С�РЎС“РЎРѓР С•РЎР‚ Р Р…Р В° РЎРЊР С”РЎР‚Р В°Р Р…Р Вµ
	nlcd_Box(0, 0, 131, 131, 1, BLACK); //    Р вЂ”Р В°Р В»Р С‘Р Р†Р В°Р ВµР С� Р Р†Р ВµРЎРѓРЎРЉ Р Т‘Р С‘РЎРѓР С—Р В»Р ВµР в„– Р В±РЎС“Р Т‘РЎС“РЎвЂ°Р С‘Р С� РЎвЂћР С•Р Р…Р С•Р С� - Р С�Р С•Р В¶Р Р…Р С• Р Р†РЎвЂ№Р В±РЎР‚Р В°РЎвЂљРЎРЉ Р В»РЎР‹Р В±Р С•Р в„–
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_DISPON);   //     Р вЂќР С‘РЎРѓР С—Р В»Р ВµР в„– Р Р†Р С”Р В».
}

//******************************************************************************
//  Р СџР ВµРЎР‚Р ВµР Т‘Р В°РЎвЂЎР В° Р В±Р В°Р в„–РЎвЂљР В° (Р С”Р С•Р С�Р В°Р Р…Р Т‘РЎвЂ№ Р С‘Р В»Р С‘ Р Т‘Р В°Р Р…Р Р…РЎвЂ№РЎвЂ¦) Р Р…Р В° LCD-Р С”Р С•Р Р…РЎвЂљРЎР‚Р С•Р В»Р В»Р ВµРЎР‚
//  mode: CMD_LCD_MODE  - Р С—Р ВµРЎР‚Р ВµР Т‘Р В°Р ВµР С� Р С”Р С•Р С�Р В°Р Р…Р Т‘РЎС“
//		  DATA_LCD_MODE - Р С—Р ВµРЎР‚Р ВµР Т‘Р В°Р ВµР С� Р Т‘Р В°Р Р…Р Р…РЎвЂ№Р Вµ
//  c:    Р В·Р Р…Р В°РЎвЂЎР ВµР Р…Р С‘Р Вµ Р С—Р ВµРЎР‚Р ВµР Т‘Р В°Р Р†Р В°Р ВµР С�Р С•Р С–Р С• Р В±Р В°Р в„–РЎвЂљР В°
void nlcd_SendByte(char mode, unsigned char c)
{
	unsigned char i;
	CS_LCD_RESET;
	SCLK_LCD_RESET;
	if (mode)
		SDA_LCD_SET;
	else
		SDA_LCD_RESET;

	SCLK_LCD_SET;

	for (i = 0; i < 8; i++)
	{
		SCLK_LCD_RESET;
		if (c & 0x80)
			SDA_LCD_SET;
		else
			SDA_LCD_RESET;
		SCLK_LCD_SET;
		c <<= 1;
		_delay_us(NLCD_MIN_DELAY);
	}

	CS_LCD_SET;
}

//******************************************************************************
//	Р пїЅР С�РЎРЏ: 		 GotoXY(unsigned char x, unsigned char y)
// 	Р С›Р С—Р С‘РЎРѓР В°Р Р…Р С‘Р Вµ:    Р Р€РЎРѓРЎвЂљР В°Р Р…Р В°Р Р†Р В»Р С‘Р Р†Р В°Р ВµРЎвЂљ Р Р† Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎР‹ x, y
//           	 GotoXY( x, y)
//	Р СџР В°РЎР‚Р В°Р С�Р ВµРЎвЂљРЎР‚РЎвЂ№:   x: Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//			     y: Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//  Р СџРЎР‚Р С‘Р С�Р ВµРЎР‚:		 GotoXY(32,17);
//******************************************************************************
void nlcd_GotoXY(unsigned char x, unsigned char y)
{
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_PASET);   // Р С™Р С•Р С�Р В°Р Р…Р Т‘Р В° Р В°Р Т‘РЎР‚Р ВµРЎРѓР В° РЎРѓРЎвЂљРЎР‚Р В°Р Р…Р С‘РЎвЂ РЎвЂ№ RAM
	nlcd_SendByte(DATA_LCD_MODE, x);                   // Р РЋРЎвЂљР В°РЎР‚РЎвЂљ
	nlcd_SendByte(DATA_LCD_MODE, x);                   // Р С™Р С•Р Р…Р ВµРЎвЂ 

	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_CASET);   // Р С™Р С•Р С�Р В°Р Р…Р Т‘Р В° Р В°Р Т‘РЎР‚Р ВµРЎРѓР В° Р С”Р С•Р В»Р С•Р Р…Р С”Р С‘ RAM
	nlcd_SendByte(DATA_LCD_MODE, y);                   // Р РЋРЎвЂљР В°РЎР‚РЎвЂљ
	nlcd_SendByte(DATA_LCD_MODE, y);                   // Р С™Р С•Р Р…Р ВµРЎвЂ 
}

//******************************************************************************
//	Р пїЅР С�РЎРЏ: 		 nlcd_Pixel(unsigned char x, unsigned char y, int color)
// 	Р С›Р С—Р С‘РЎРѓР В°Р Р…Р С‘Р Вµ:    Р Р€РЎРѓРЎвЂљР В°Р Р…Р В°Р Р†Р В»Р С‘Р Р†Р В°Р ВµРЎвЂљ Pixel Р Р† Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎР‹ x, y, РЎвЂ Р Р†Р ВµРЎвЂљР С•Р С� color
//           	 nlcd_Pixel( x, y,color)
//	Р СџР В°РЎР‚Р В°Р С�Р ВµРЎвЂљРЎР‚РЎвЂ№:   x:     Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//			     y:     Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//               color: РЎвЂ Р Р†Р ВµРЎвЂљ (12-bit РЎРѓР С�. #define)
//  Р СџРЎР‚Р С‘Р С�Р ВµРЎР‚:		 nlcd_Pixel(21,45,BLACK);
//******************************************************************************
void nlcd_Pixel(unsigned char x, unsigned char y, int color)
{
	nlcd_GotoXY(x, y);
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_RAMWR);
	CS_LCD_RESET;

	nlcd_SendByte(DATA_LCD_MODE, (unsigned char) ((color >> 4) & 0xff));
	nlcd_SendByte(DATA_LCD_MODE, (unsigned char) ((color & 0xf) << 4) | 0x00);

	CS_LCD_SET;
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_NOP);
}

//******************************************************************************
//	Р пїЅР С�РЎРЏ: 		 nlcd_Line(unsigned char x0, unsigned char y0, unsigned char x1, unsigned char y1, int color)
// 	Р С›Р С—Р С‘РЎРѓР В°Р Р…Р С‘Р Вµ:    Р В Р С‘РЎРѓРЎС“Р ВµРЎвЂљ Р В»Р С‘Р Р…Р С‘РЎР‹ Р С‘Р В· Р С”Р С•Р С•РЎР‚Р Т‘Р С‘Р Р…Р В°РЎвЂљРЎвЂ№ x0, y0 Р Р† Р С”Р С•Р С•РЎР‚Р Т‘Р С‘Р Р…Р В°РЎвЂљРЎС“ x1, y1 РЎвЂ Р Р†Р ВµРЎвЂљР С•Р С� color
//           	 nlcd_Line(x0, y0, x1, y1, color)
//	Р СџР В°РЎР‚Р В°Р С�Р ВµРЎвЂљРЎР‚РЎвЂ№:   x:     Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//			     y:     Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//               color: РЎвЂ Р Р†Р ВµРЎвЂљ (12-bit РЎРѓР С�. #define)
//  Р СџРЎР‚Р С‘Р С�Р ВµРЎР‚:		 nlcd_Line(25,60,25,80,RED);
//******************************************************************************
void nlcd_Line(unsigned char x0, unsigned char y0, unsigned char x1, unsigned char y1, int color)
{

	int dy = y1 - y0;
	int dx = x1 - x0;
	int stepx, stepy;
	if (dy < 0)
	{
		dy = -dy;
		stepy = -1;
	}
	else
	{
		stepy = 1;
	}
	if (dx < 0)
	{
		dx = -dx;
		stepx = -1;
	}
	else
	{
		stepx = 1;
	}

	dy <<= 1;                              // dy is now 2*dy
	dx <<= 1;                              // dx is now 2*dx

	nlcd_Pixel(x0, y0, color);

	if (dx > dy)
	{
		int fraction = dy - (dx >> 1);     // same as 2*dy - dx
		while (x0 != x1)
		{
			if (fraction >= 0)
			{
				y0 += stepy;
				fraction -= dx;            // same as fraction -= 2*dx
			}
			x0 += stepx;
			fraction += dy;                // same as fraction -= 2*dy
			nlcd_Pixel(x0, y0, color);
		}
	}
	else
	{
		int fraction = dx - (dy >> 1);
		while (y0 != y1)
		{
			if (fraction >= 0)
			{
				x0 += stepx;
				fraction -= dy;
			}
			y0 += stepy;
			fraction += dx;
			nlcd_Pixel(x0, y0, color);
		}
	}

}

//******************************************************************************
//	Р пїЅР С�РЎРЏ: 		 nlcd_Box(unsigned char x0, unsigned char y0, unsigned char x1, unsigned char y1, unsigned char fill, int color)
// 	Р С›Р С—Р С‘РЎРѓР В°Р Р…Р С‘Р Вµ:    Р В Р С‘РЎРѓРЎС“Р ВµРЎвЂљ Р С—РЎР‚РЎРЏР С�Р С•РЎС“Р С–Р С•Р В»РЎРЉР Р…Р С‘Р С” Р С‘Р В· Р С”Р С•Р С•РЎР‚Р Т‘Р С‘Р Р…Р В°РЎвЂљРЎвЂ№ x0, y0 Р Р† Р С”Р С•Р С•РЎР‚Р Т‘Р С‘Р Р…Р В°РЎвЂљРЎС“ x1, y1 РЎРѓ Р В·Р В°Р В»Р С‘Р Р†Р С”Р С•Р в„– Р С‘Р В»Р С‘ Р Р…Р ВµРЎвЂљ, РЎвЂ Р Р†Р ВµРЎвЂљР С•Р С� color
//           	 nlcd_Line(x0, y0, x1, y1, fill, color)
//	Р СџР В°РЎР‚Р В°Р С�Р ВµРЎвЂљРЎР‚РЎвЂ№:   x:     Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//			     y:     Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//               fill:  1-РЎРѓ Р В·Р В°Р В»Р С‘Р Р†Р С”Р С•Р в„–, 0-Р В±Р ВµР В· Р В·Р В°Р В»Р С‘Р Р†Р С”Р С‘
//               color: РЎвЂ Р Р†Р ВµРЎвЂљ (12-bit РЎРѓР С�. #define)
//  Р СџРЎР‚Р С‘Р С�Р ВµРЎР‚:		 nlcd_Box(20,30,40,50,1,RED);  // Р РЋ Р В·Р В°Р В»Р С‘Р Р†Р С”Р С•Р в„–
//******************************************************************************

void nlcd_Box(unsigned char x0, unsigned char y0, unsigned char x1, unsigned char y1, unsigned char fill, int color)
{
	unsigned char xmin, xmax, ymin, ymax;
	int i;
	if (fill == FILL)                                   //  ******************************************************
	{ //  * Р СџРЎР‚Р С•Р Р†Р ВµРЎР‚РЎРЏР ВµР С� - Р В±РЎС“Р Т‘Р ВµРЎвЂљ Р С—РЎР‚РЎРЏР С�Р С•РЎС“Р С–Р С•Р В»РЎРЉР Р…Р С‘Р С” РЎРѓ Р В·Р В°Р В»Р С‘Р Р†Р С”Р С•Р в„– Р С‘Р В»Р С‘ Р Р…Р ВµРЎвЂљ  *              *
		xmin = (x0 <= x1) ? x0 : x1;              //  * Р вЂ™ РЎвЂ Р С‘Р С”Р В»Р Вµ Р С‘РЎРѓР С—Р С•Р В»РЎРЉР В·РЎС“Р ВµР С� 2 Р С—Р С‘Р С”РЎРѓР ВµР В»РЎРЏ Р В·Р В° 1 РЎвЂљР В°Р С”РЎвЂљ              *
		xmax = (x0 > x1) ? x0 : x1;          //  *Р В Р В°РЎРѓРЎвЂЎР С‘РЎвЂљРЎвЂ№Р Р†Р В°Р ВµР С� Р С�Р В°Р С”РЎРѓР С‘Р С�РЎС“Р С� Р С‘ Р С�Р С‘Р Р…Р С‘Р С�РЎС“Р С� Р Т‘Р В»РЎРЏ X Р С‘ Y             *
		ymin = (y0 <= y1) ? y0 : y1;                   //  *******************************************************
		ymax = (y0 > y1) ? y0 : y1;
		//    *****************************************************
		nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_PASET);    //   *            Р С™Р С•Р С•РЎР‚Р Т‘Р С‘Р Р…Р В°РЎвЂљРЎвЂ№ РЎРѓРЎвЂљРЎР‚Р С•Р С”Р С‘ Р Р† RAM                 *
		nlcd_SendByte(DATA_LCD_MODE, xmin); //   *  Р Р€Р С”Р В°Р В·РЎвЂ№Р Р†Р В°Р ВµР С� РЎР‚Р В°Р В·Р С�Р ВµРЎР‚РЎвЂ№ Р С—РЎР‚РЎРЏР С�Р С•РЎС“Р С–Р С•Р В»РЎРЉР Р…Р С‘Р С”Р В° Р Р† РЎРѓР С•Р С•РЎвЂљР Р†Р ВµРЎвЂљРЎРѓРЎвЂљР Р†Р С‘Р С‘   *
		nlcd_SendByte(DATA_LCD_MODE, xmax);                 //   *             РЎРѓ Р В·Р В°Р Т‘Р В°Р Р…Р Р…РЎвЂ№Р С�Р С‘ Р С—РЎР‚Р ВµР Т‘Р ВµР В»Р В°Р С�Р С‘                  *
		nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_CASET);    //   *            Р С™Р С•Р С•РЎР‚Р Т‘Р С‘Р Р…Р В°РЎвЂљРЎвЂ№ РЎРѓРЎвЂљР С•Р В»Р В±РЎвЂ Р В° Р Р† RAM                *
		nlcd_SendByte(DATA_LCD_MODE, ymin);                 //   *                                                    *
		nlcd_SendByte(DATA_LCD_MODE, ymax);                 //   ******************************************************

		nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_RAMWR);    //        Р СџР С‘РЎв‚¬Р ВµР С� Р Р† RAM
															//
															//      Р В¦Р С‘Р С”Р В» Р Т‘Р В»РЎРЏ Р С•Р В±РЎвЂ°Р ВµР С–Р С• Р С”Р С•Р В»Р С‘РЎвЂЎР ВµРЎРѓРЎвЂљР Р†Р В° Р С—Р С‘Р С”РЎРѓР ВµР В»Р ВµР в„– / 2
															//
		for (i = 0; i < ((((xmax - xmin + 1) * (ymax - ymin + 1)) / 2) + 1); i++)
		{

			// Р пїЅРЎРѓР С—Р С•Р В»РЎРЉР В·РЎС“Р ВµР С� Р В·Р Р…Р В°РЎвЂЎР ВµР Р…Р С‘Р Вµ РЎвЂ Р Р†Р ВµРЎвЂљР В° Р Т‘Р В»РЎРЏ Р Р†РЎвЂ№Р Р†Р С•Р Т‘Р В° 3 Р В±Р В°Р в„–РЎвЂљР С•Р Р† Р Т‘Р В°Р Р…Р Р…РЎвЂ№РЎвЂ¦ - Р С•РЎвЂ¦Р Р†Р В°РЎвЂљРЎвЂ№Р Р†Р В°РЎР‹РЎвЂљ 2 Р С—Р С‘Р С”РЎРѓР ВµР В»РЎРЏ
			CS_LCD_RESET;
			nlcd_SendByte(DATA_LCD_MODE, (color >> 4) & 0xFF);
			nlcd_SendByte(DATA_LCD_MODE, ((color & 0xF) << 4) | ((color >> 8) & 0xF));
			nlcd_SendByte(DATA_LCD_MODE, color & 0xFF);
			CS_LCD_SET;
		}
		nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_NOP);
	}
	else
	{
		nlcd_Line(x0, y0, x1, y0, color);               //Р В Р С‘РЎРѓРЎС“Р ВµР С� РЎвЂЎР ВµРЎвЂљРЎвЂ№РЎР‚Р Вµ Р В»Р С‘Р Р…Р С‘Р С‘ Р С—РЎР‚РЎРЏР С�Р С•РЎС“Р С–Р С•Р В»РЎРЉР Р…Р С‘Р С”Р В°
		nlcd_Line(x0, y1, x1, y1, color);
		nlcd_Line(x0, y0, x0, y1, color);
		nlcd_Line(x1, y0, x1, y1, color);
	}
}

//******************************************************************************
//	Р пїЅР С�РЎРЏ: 		 nlcd_Circle(unsigned char x0, unsigned char y0, unsigned char radius, int color)
// 	Р С›Р С—Р С‘РЎРѓР В°Р Р…Р С‘Р Вµ:    Р В Р С‘РЎРѓРЎС“Р ВµРЎвЂљ Р С”РЎР‚РЎС“Р С– Р С‘Р В· Р С”Р С•Р С•РЎР‚Р Т‘Р С‘Р Р…Р В°РЎвЂљРЎвЂ№ x0, y0, РЎРѓ РЎР‚Р В°Р Т‘Р С‘РЎС“РЎРѓР С•Р С� Р С‘ РЎвЂ Р Р†Р ВµРЎвЂљР С•Р С� color
//           	 nlcd_Circle(x0, y0, radius, color)
//	Р СџР В°РЎР‚Р В°Р С�Р ВµРЎвЂљРЎР‚РЎвЂ№:   x:       Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//			     y:       Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//               radius:  Р Р† Р С—Р С‘Р С”РЎРѓР ВµР В»РЎРЏРЎвЂ¦
//               color: РЎвЂ Р Р†Р ВµРЎвЂљ (12-bit РЎРѓР С�. #define)
//  Р СџРЎР‚Р С‘Р С�Р ВµРЎР‚:		 nlcd_Circle(10,55,2,BLUE);
//******************************************************************************
void nlcd_Circle(unsigned char x0, unsigned char y0, unsigned char radius, int color)
{
	int f = 1 - radius;
	int ddF_x = 0;
	int ddF_y = -2 * radius;
	unsigned char x = 0;
	unsigned char y = radius;

	nlcd_Pixel(x0, y0 + radius, color);
	nlcd_Pixel(x0, y0 - radius, color);
	nlcd_Pixel(x0 + radius, y0, color);
	nlcd_Pixel(x0 - radius, y0, color);

	while (x < y)
	{
		if (f >= 0)
		{

			y--;
			ddF_y += 2;
			f += ddF_y;
		}

		x++;
		ddF_x += 2;
		f += ddF_x + 1;

		nlcd_Pixel(x0 + x, y0 + y, color);
		nlcd_Pixel(x0 - x, y0 + y, color);
		nlcd_Pixel(x0 + x, y0 - y, color);
		nlcd_Pixel(x0 - x, y0 - y, color);
		nlcd_Pixel(x0 + y, y0 + x, color);
		nlcd_Pixel(x0 - y, y0 + x, color);
		nlcd_Pixel(x0 + y, y0 - x, color);
		nlcd_Pixel(x0 - y, y0 - x, color);

	}
}

//******************************************************************************
//	Р пїЅР С�РЎРЏ: 		nlcd_Char(char c, unsigned char x, unsigned char y, int fColor, int bColor)
// 	Р С›Р С—Р С‘РЎРѓР В°Р Р…Р С‘Р Вµ:   Р вЂ™РЎвЂ№Р Р†Р С•Р Т‘Р С‘РЎвЂљ РЎРѓР С‘Р С�Р Р†Р С•Р В» Р Р† Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎР‹ x,y, РЎвЂ Р Р†Р ВµРЎвЂљР С•Р С� fcolor, Р С‘ РЎвЂћР С•Р Р…Р С•Р С� bcolor
//	Р СџР В°РЎР‚Р В°Р С�Р ВµРЎвЂљРЎР‚РЎвЂ№:  x:       Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//			    y:       Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//         fcolor:       РЎвЂ Р Р†Р ВµРЎвЂљ (12-bit РЎРѓР С�. #define)
//         bcolor:       РЎвЂ Р Р†Р ВµРЎвЂљ (12-bit РЎРѓР С�. #define)
//  Р СџРЎР‚Р С‘Р С�Р ВµРЎР‚:
//******************************************************************************

void nlcd_Char(char c, unsigned char x, unsigned char y, int fColor, int bColor)
{
	int i;
	int j;
	unsigned int nCols;
	unsigned int nRows;
	unsigned int nBytes;
	unsigned char PixelRow;
	unsigned char Mask;
	unsigned int Word0;
	unsigned char *pFont;
	unsigned char *pChar;
	int offset = 0;
	;

	if ((unsigned char) c > 127)
		c = c - 64;



	pFont = (unsigned char *) Nokia6610_fnt8x8;

	nCols = *pFont;

	nRows = *(pFont + 1);

	nBytes = *(pFont + 2);
	offset = (nBytes * (((unsigned char) c) - 0x1F));
	pChar = pFont + offset;

	for (i = 0; i < nCols; i++)
	{
		PixelRow = *pChar++;
		Mask = 0x80;
		for (j = 0; j < nRows; j += 1)
		{
			if ((PixelRow & Mask) == 0)
				Word0 = bColor;
			else
				Word0 = fColor;
			nlcd_Pixel(x - j, y + i, Word0);
			Mask = Mask >> 1;
		}
	}
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_NOP);
}

//******************************************************************************
//	Р пїЅР С�РЎРЏ: 		nlcd_Text(char *ptext, unsigned char x, unsigned char  y,  int fColor, int bColor)
// 	Р С›Р С—Р С‘РЎРѓР В°Р Р…Р С‘Р Вµ:   Р вЂ™РЎвЂ№Р Р†Р С•Р Т‘Р С‘РЎвЂљ РЎвЂљР ВµР С”РЎРѓРЎвЂљ РЎРѓ Р С”Р С•Р С•РЎР‚Р Т‘Р С‘Р Р…Р В°РЎвЂљ x, y, РЎвЂ Р Р†Р ВµРЎвЂљР С•Р С� fColor, Р Р…Р В° РЎвЂћР С•Р Р…Р Вµ bColor
//	Р СџР В°РЎР‚Р В°Р С�Р ВµРЎвЂљРЎР‚РЎвЂ№:  x:       Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//			    y:       Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//              fColor:  РЎвЂ Р Р†Р ВµРЎвЂљ (12-bit РЎРѓР С�. #define)
//              bColor:  РЎвЂ Р Р†Р ВµРЎвЂљ (12-bit РЎРѓР С�. #define)
//  Р СџРЎР‚Р С‘Р С�Р ВµРЎР‚:		nlcd_Text("Hello",40,12,WHITE,BLACK);
//******************************************************************************

void nlcd_Text(char *ptext, unsigned char x, unsigned char y, int fColor, int bColor)
{
	while (*ptext != 0x00)
	{
		nlcd_Char(*ptext++, x, y, fColor, bColor);
		y = y + 8;
		if (x > 131)
			break;
	}
}

//******************************************************************************
//	Р пїЅР С�РЎРЏ: 		 nlcd_Bitmap(unsigned char start_x, unsigned char start_y, unsigned char h_size, unsigned char v_size, unsigned char *bitmap_data)
// 	Р С›Р С—Р С‘РЎРѓР В°Р Р…Р С‘Р Вµ:    Р вЂ™РЎвЂ№Р Р†Р С•Р Т‘Р С‘РЎвЂљ Р С‘Р В·Р С•Р В±РЎР‚Р В°Р В¶Р ВµР Р…Р С‘Р Вµ РЎРѓ Р С—Р С•Р В·Р С‘РЎвЂ Р С‘Р С‘ x, y,( Р Р†Р ВµРЎР‚РЎвЂ¦Р Р…Р С‘Р в„– Р В»Р ВµР Р†РЎвЂ№Р в„– РЎС“Р С–Р С•Р В»), Р С‘ Р Р†РЎвЂ№РЎРѓР С•РЎвЂљР С•Р в„– Р С—Р С• Р С–Р С•РЎР‚Р С‘Р В·Р С•Р Р…РЎвЂљР В°Р В»Р С‘ Р С‘ Р Р†Р ВµРЎР‚РЎвЂљР С‘Р С”Р В°Р В»Р С‘ ( Р Р† Р С—Р С‘Р С”РЎРѓР ВµР В»РЎРЏРЎвЂ¦),Р С‘Р С�РЎРЏ Р С�Р В°РЎРѓРЎРѓР С‘Р Р†Р В° РЎРѓ Р С‘Р В·Р С•Р В±РЎР‚Р В°Р В¶Р ВµР Р…Р С‘Р ВµР С�
//	Р СџР В°РЎР‚Р В°Р С�Р ВµРЎвЂљРЎР‚РЎвЂ№:   x:            Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//               y:            Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//               h_size:       Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//               v_size:       Р С—Р С•Р В·Р С‘РЎвЂ Р С‘РЎРЏ 0-131
//  Р СџРЎР‚Р С‘Р С�Р ВµРЎР‚:      nlcd_Bitmap (41, 41, 50 , 50, bitmap_data);
//******************************************************************************
//
//                          Р вЂ™Р Р…Р С‘Р С�Р В°Р Р…Р С‘Р Вµ !
//  Р В Р В°Р В·Р С�Р ВµРЎР‚РЎвЂ№ Р С‘Р В·Р С•Р В±РЎР‚Р В°Р В¶Р ВµР Р…Р С‘РЎРЏ Р Т‘Р С•Р В»Р В¶Р Р…РЎвЂ№ Р В±РЎвЂ№РЎвЂљРЎРЉ РЎС“Р С”Р В°Р В·Р В°Р Р…РЎвЂ№ Р Р† РЎРѓР С•Р С•РЎвЂљР Р†Р ВµРЎвЂљРЎРѓРЎвЂљР Р†Р С‘Р С‘ РЎРѓ Р С—РЎР‚Р ВµР С•Р В±РЎР‚Р В°Р В·Р С•Р Р†Р В°Р Р…Р Р…РЎвЂ№Р С� РЎвЂћР В°Р в„–Р В»Р С•Р С�, РЎвЂљ.Р Вµ. Р ВµРЎРѓР В»Р С‘ Р С�РЎвЂ№
//  Р С‘Р В·Р С•Р В±РЎР‚Р В°Р В¶Р ВµР Р…Р С‘Р Вµ Р С—РЎР‚Р ВµР С•Р В±РЎР‚Р В°Р В·Р С•Р Р†Р В°Р В»Р С‘ Р С‘Р В· .jpeg 1600РЎвЂ¦768 Р Р† 100РЎвЂ¦100 .bmp - РЎР‚Р В°Р В·Р С�Р ВµРЎР‚РЎвЂ№ h_size Р С‘ v_size Р Т‘Р С•Р В»Р В¶Р Р…РЎвЂ№ Р В±РЎвЂ№РЎвЂљРЎРЉ
//  РЎС“Р С”Р В°Р В·Р В°Р Р…РЎвЂ№ Р С”Р В°Р С” 100 Р С‘ 100 (Р С—Р С‘Р С”РЎРѓР ВµР В»Р ВµР в„–). Р пїЅР Р…Р В°РЎвЂЎР Вµ Р С‘Р В·Р С•Р В±РЎР‚Р В°Р В¶Р ВµР Р…Р С‘Р Вµ Р В±РЎС“Р Т‘Р ВµРЎвЂљ Р Р†РЎвЂ№Р Р†Р С•Р Т‘Р С‘РЎвЂљРЎРѓРЎРЏ Р Р…Р ВµР С”Р С•РЎР‚РЎР‚Р ВµР С”РЎвЂљР Р…Р С•.
//
//******************************************************************************

void nlcd_Bitmap(unsigned char start_x, unsigned char start_y, unsigned char h_size, unsigned char v_size, unsigned char *bitmap_data)
{
	int i;
	unsigned char *pBitmap;
	// Р Р€Р С”Р В°Р В·Р В°РЎвЂљРЎРЉ РЎР‚Р В°Р В·Р С�Р ВµРЎР‚РЎвЂ№ РЎР‚Р С‘РЎРѓРЎС“Р Р…Р С”Р В° Р Р† РЎРѓР С•Р С•РЎвЂљР Р†Р ВµРЎвЂљРЎРѓРЎвЂљР Р†Р С‘Р С‘ РЎРѓ РЎРЊРЎвЂљР С‘Р С�Р С‘ Р С—РЎР‚Р ВµР Т‘Р ВµР В»Р В°Р С�Р С‘
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_PASET);   // Р С™Р С•Р С�Р В°Р Р…Р Т‘Р В° Р В°Р Т‘РЎР‚Р ВµРЎРѓР В° РЎРѓРЎвЂљРЎР‚Р В°Р Р…Р С‘РЎвЂ РЎвЂ№ RAM
	nlcd_SendByte(DATA_LCD_MODE, start_x);             // Р РЋРЎвЂљР В°РЎР‚РЎвЂљ
	nlcd_SendByte(DATA_LCD_MODE, start_x + h_size - 1);    // Р С™Р С•Р Р…Р ВµРЎвЂ 

	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_CASET);   // Р С™Р С•Р С�Р В°Р Р…Р Т‘Р В° Р В°Р Т‘РЎР‚Р ВµРЎРѓР В° Р С”Р С•Р В»Р С•Р Р…Р С”Р С‘ RAM
	nlcd_SendByte(DATA_LCD_MODE, start_y);             // Р РЋРЎвЂљР В°РЎР‚РЎвЂљ
	nlcd_SendByte(DATA_LCD_MODE, start_y + v_size - 1);    // Р С™Р С•Р Р…Р ВµРЎвЂ 

	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_RAMWR);   // Р СџР С‘РЎв‚¬Р ВµР С� Р Р† RAM

	pBitmap = (unsigned char *) bitmap_data;

	for (i = 0; i < (h_size * v_size) >> 1; i++)
	{
		unsigned char bitmap;
		CS_LCD_RESET;

		bitmap = *pBitmap++;
		nlcd_SendByte(DATA_LCD_MODE, bitmap);
		bitmap = *pBitmap++;
		nlcd_SendByte(DATA_LCD_MODE, bitmap);
		bitmap = *pBitmap++;
		nlcd_SendByte(DATA_LCD_MODE, bitmap);
		CS_LCD_SET;
	}
	nlcd_SendByte(CMD_LCD_MODE, LCD_PHILLIPS_NOP);
}

