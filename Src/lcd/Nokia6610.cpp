/*
 * Nokia6610.cpp
 *
 *  Created on: 06 марта 2015 г.
 *      Author: temmka
 */

#include <Nokia6610.h>
#include "Nokia6610_fonts.h"

Nokia6610::Nokia6610()
{
	// TODO Auto-generated constructor stub

}

void delay_ms(int t){
int i;
	for(i=0;i<t*100;i++){}
}

void delay_us(int t){
int i;
	for(i=0;i<t;i++){}
}

void Nokia6610::Init(void)
{
	CS_LCD_SET;
	delay_ms(100);
	CS_LCD_RESET;
	SDA_LCD_RESET;
	SCLK_LCD_SET;

	RST_LCD_SET;
	RST_LCD_RESET;
	delay_ms(20);
	RST_LCD_SET;
	delay_ms(20);
	SCLK_LCD_SET;
	SDA_LCD_SET;
	SCLK_LCD_SET;

	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_SWRESET);  // software reset
	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_SLEEPOUT); // sleep out
	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_BSTRON);   // booster voltage ON
	delay_ms(100);
	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_DISPON);   // display ON
	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_NORON);    // display normal mode
	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_PASET);    // page address set            2-byte
	SendByte(DATA_LCD_MODE, 0);                    // 0
	SendByte(DATA_LCD_MODE, 0x83);                 //131
	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_CASET);    // column address set          2-byte
	SendByte(DATA_LCD_MODE, 0);                    // 0
	SendByte(DATA_LCD_MODE, 0x83);                 // 131
	delay_ms(5);
	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_RAMWR);    // memory write
	delay_ms(50);
	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_INVOFF);   // inversion OFF

	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_COLMOD);   // interface pixel format
	SendByte(DATA_LCD_MODE, 0x03);

	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_MADCTL);   // memory access control
	SendByte(DATA_LCD_MODE, 0x00);//0x00, 0x68, 0xC8,

	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_SETCON);   // write contrast
	SendByte(DATA_LCD_MODE, 0x3C);
	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_DISPOFF);  // display OFF
	drawRect(0, 0, 131, 131, 1, BLACK);
	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_DISPON);   // display ON
}

void Nokia6610::SendByte(char mode, unsigned char c)
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
		delay_us(MIN_DELAY);
	}

	CS_LCD_SET;
}

void Nokia6610::GotoXY(unsigned char x, unsigned char y)
{
	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_PASET);
	SendByte(DATA_LCD_MODE, x);
	SendByte(DATA_LCD_MODE, x);

	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_CASET);
	SendByte(DATA_LCD_MODE, y);
	SendByte(DATA_LCD_MODE, y);
}

void Nokia6610::drawPixel(unsigned char x, unsigned char y, int color)
{
	GotoXY(x, y);
	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_RAMWR);
	CS_LCD_RESET;

	SendByte(DATA_LCD_MODE, (unsigned char) ((color >> 4) & 0xff));
	SendByte(DATA_LCD_MODE, (unsigned char) ((color & 0xf) << 4) | 0x00);

	CS_LCD_SET;
	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_NOP);
}

void Nokia6610::drawLine(unsigned char x0, unsigned char y0, unsigned char x1, unsigned char y1, int color)
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

	drawPixel(x0, y0, color);

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
			drawPixel(x0, y0, color);
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
			drawPixel(x0, y0, color);
		}
	}

}

void Nokia6610::drawRect(unsigned char x0, unsigned char y0, unsigned char x1, unsigned char y1, unsigned char fill, int color)
{
	unsigned char xmin, xmax, ymin, ymax;
	int i;
	if (fill == FILL)
	{
		xmin = (x0 <= x1) ? x0 : x1;
		xmax = (x0 > x1) ? x0 : x1;
		ymin = (y0 <= y1) ? y0 : y1;
		ymax = (y0 > y1) ? y0 : y1;

		SendByte(CMD_LCD_MODE, LCD_PHILLIPS_PASET);
		SendByte(DATA_LCD_MODE, xmin);
		SendByte(DATA_LCD_MODE, xmax);
		SendByte(CMD_LCD_MODE, LCD_PHILLIPS_CASET);
		SendByte(DATA_LCD_MODE, ymin);
		SendByte(DATA_LCD_MODE, ymax);

		SendByte(CMD_LCD_MODE, LCD_PHILLIPS_RAMWR);

		for (i = 0; i < ((((xmax - xmin + 1) * (ymax - ymin + 1)) / 2) + 1); i++)
		{

			CS_LCD_RESET;
			SendByte(DATA_LCD_MODE, (color >> 4) & 0xFF);
			SendByte(DATA_LCD_MODE, ((color & 0xF) << 4) | ((color >> 8) & 0xF));
			SendByte(DATA_LCD_MODE, color & 0xFF);
			CS_LCD_SET;
		}
		SendByte(CMD_LCD_MODE, LCD_PHILLIPS_NOP);
	}
	else
	{
		drawLine(x0, y0, x1, y0, color);
		drawLine(x0, y1, x1, y1, color);
		drawLine(x0, y0, x0, y1, color);
		drawLine(x1, y0, x1, y1, color);
	}
}

void Nokia6610::drawCircle(unsigned char x0, unsigned char y0, unsigned char radius, int color)
{
	int f = 1 - radius;
	int ddF_x = 0;
	int ddF_y = -2 * radius;
	unsigned char x = 0;
	unsigned char y = radius;

	drawPixel(x0, y0 + radius, color);
	drawPixel(x0, y0 - radius, color);
	drawPixel(x0 + radius, y0, color);
	drawPixel(x0 - radius, y0, color);

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

		drawPixel(x0 + x, y0 + y, color);
		drawPixel(x0 - x, y0 + y, color);
		drawPixel(x0 + x, y0 - y, color);
		drawPixel(x0 - x, y0 - y, color);
		drawPixel(x0 + y, y0 + x, color);
		drawPixel(x0 - y, y0 + x, color);
		drawPixel(x0 + y, y0 - x, color);
		drawPixel(x0 - y, y0 - x, color);

	}
}

void Nokia6610::drawChar(char c, unsigned char x, unsigned char y, int size, int fColor, int bColor)
{
	unsigned int i, j;
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

	//pFont = (unsigned char *) Nokia6610_fnt8x8;
	unsigned char *FontTable[] =
	{ (unsigned char *) Nokia6610_fnt6x8, (unsigned char *) Nokia6610_fnt8x8, (unsigned char *) Nokia6610_fnt8x16 };
	pFont = FontTable[size];

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
			drawPixel(x - j, y + i, Word0);
			Mask = Mask >> 1;
		}
	}
	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_NOP);
}

void Nokia6610::drawStr(char *ptext, unsigned char x,unsigned char y,int size, int fColor, int bColor)
{
	while (*ptext != 0x00)
	{
		drawChar(*ptext++, x, y, size, fColor, bColor);
		y = y + 8;
		if (x > 131)
			break;
	}
}

void Nokia6610::drawBitmap(unsigned char start_x, unsigned char start_y, unsigned char h_size, unsigned char v_size, unsigned char *bitmap_data)
{
	int i;
	unsigned char *pBitmap;

	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_PASET);

	SendByte(DATA_LCD_MODE, start_x);

	SendByte(DATA_LCD_MODE, start_x + h_size - 1);

	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_CASET);

	SendByte(DATA_LCD_MODE, start_y);

	SendByte(DATA_LCD_MODE, start_y + v_size - 1);

	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_RAMWR);

	pBitmap = (unsigned char *) bitmap_data;

	for (i = 0; i < (h_size * v_size) >> 1; i++)
	{
		unsigned char bitmap;
		CS_LCD_RESET;

		bitmap = *pBitmap++;
		SendByte(DATA_LCD_MODE, bitmap);
		bitmap = *pBitmap++;
		SendByte(DATA_LCD_MODE, bitmap);
		bitmap = *pBitmap++;
		SendByte(DATA_LCD_MODE, bitmap);
		CS_LCD_SET;
	}
	SendByte(CMD_LCD_MODE, LCD_PHILLIPS_NOP);
}
