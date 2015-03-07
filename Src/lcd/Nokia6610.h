/*
 * Nokia6610.h
 *
 *  Created on: 06 марта 2015 г.
 *      Author: temmka
 */


#include "stm32f4xx_hal_gpio.h"


#ifndef NOKIA6610_H_
#define NOKIA6610_H_


#define SCLK_LCD_PIN    3
#define SDA_LCD_PIN     2
#define CS_LCD_PIN      1
#define RST_LCD_PIN     0




#define LCD_PHILLIPS_NOP        0x00   // nop
#define LCD_PHILLIPS_SWRESET    0x01   // software reset
#define LCD_PHILLIPS_BSTROFF    0x02   // booster voltage OFF
#define LCD_PHILLIPS_BSTRON     0x03   // booster voltage ON
#define LCD_PHILLIPS_RDDIDIF    0x04   // read display identification
#define LCD_PHILLIPS_RDDST      0x09   // read display status
#define LCD_PHILLIPS_SLEEPIN    0x10   // sleep in
#define LCD_PHILLIPS_SLEEPOUT   0x11   // sleep out
#define LCD_PHILLIPS_PTLON      0x12   // partial display mode
#define LCD_PHILLIPS_NORON      0x13   // display normal mode
#define LCD_PHILLIPS_INVOFF     0x20   // inversion OFF
#define LCD_PHILLIPS_INVON      0x21   // inversion ON
#define LCD_PHILLIPS_DALO       0x22   // all pixel OFF
#define LCD_PHILLIPS_DAL        0x23   // all pixel ON
#define LCD_PHILLIPS_SETCON     0x25   // write contrast              1-byte
#define LCD_PHILLIPS_DISPOFF    0x28   // display OFF
#define LCD_PHILLIPS_DISPON     0x29   // display ON
#define LCD_PHILLIPS_CASET      0x2A   // column address set          2-byte
#define LCD_PHILLIPS_PASET      0x2B   // page address set            2-byte
#define LCD_PHILLIPS_RAMWR      0x2C   // memory write
#define LCD_PHILLIPS_RGBSET     0x2D   // colour set                  20-byte
#define LCD_PHILLIPS_PTLAR      0x30   // partial area
#define LCD_PHILLIPS_VSCRDEF    0x33   // vertical scrolling definition
#define LCD_PHILLIPS_TEOFF      0x34   // test mode OFF
#define LCD_PHILLIPS_TEON       0x35   // test mode ON
#define LCD_PHILLIPS_MADCTL     0x36   // memory access control       1-byte
#define LCD_PHILLIPS_SEP        0x37   // vertical scrolling start address
#define LCD_PHILLIPS_IDMOFF     0x38   // idle mode OFF
#define LCD_PHILLIPS_IDMON      0x39   // idle mode ON
#define LCD_PHILLIPS_COLMOD     0x3A   // interface pixel format      1-byte
#define LCD_PHILLIPS_SETVOP     0xB0   // set Vop
#define LCD_PHILLIPS_BRS        0xB4   // bottom row swap
#define LCD_PHILLIPS_TRS        0xB6   // top row swap
#define LCD_PHILLIPS_DISCTR     0xB9   // display control
#define LCD_PHILLIPS_DOR        0xBA   // data order
#define LCD_PHILLIPS_TCDFE      0xBD   // enable/disable DF temperature compensation
#define LCD_PHILLIPS_TCVOPE     0xBF   // enable/disable Vop temp comp
#define LCD_PHILLIPS_EC         0xC0   // internal or external  oscillator
#define LCD_PHILLIPS_SETMUL     0xC2   // set multiplication factor
#define LCD_PHILLIPS_TCVOPAB    0xC3   // set TCVOP slopes A and B
#define LCD_PHILLIPS_TCVOPCD    0xC4   // set TCVOP slopes c and d
#define LCD_PHILLIPS_TCDF       0xC5   // set divider frequency
#define LCD_PHILLIPS_DF8COLOR   0xC6   // set divider frequency 8-color mode
#define LCD_PHILLIPS_SETBS      0xC7   // set bias system
#define LCD_PHILLIPS_RDTEMP     0xC8   // temperature read back
#define LCD_PHILLIPS_NLI        0xC9   // n-line inversion
#define LCD_PHILLIPS_RDID1      0xDA   // read ID1
#define LCD_PHILLIPS_RDID2      0xDB   // read ID2
#define LCD_PHILLIPS_RDID3      0xDC   // read ID3

#define MIN_DELAY	0

#define SCLK_LCD_SET  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5,GPIO_PIN_SET)
#define SDA_LCD_SET   HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4,GPIO_PIN_SET)
#define CS_LCD_SET    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6,GPIO_PIN_SET)
#define RST_LCD_SET   HAL_GPIO_WritePin(GPIOD, GPIO_PIN_3,GPIO_PIN_SET)

#define SCLK_LCD_RESET HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5,GPIO_PIN_RESET)
#define SDA_LCD_RESET  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4,GPIO_PIN_RESET)
#define CS_LCD_RESET   HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6,GPIO_PIN_RESET)
#define RST_LCD_RESET  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_3,GPIO_PIN_RESET)

#define CMD_LCD_MODE	0
#define DATA_LCD_MODE	1

#define NOFILL	        0
#define FILL            1

#define WHITE     0xFFF
#define BLACK     0x000
#define RED       0xF00
#define GREEN     0x0F0
#define BLUE      0x00F
#define CYAN      0x1FF
#define MAGENTA   0xF0F
#define YELLOW    0xFF0
#define GRAY	  0x222
#define LIGHTBLUE 0xADE
#define PINK      0xF6A
#define BROWN     0xB22
#define ORANGE    0xFA0


#define FULL_CHARSET
#define STM32_CLOCK_HZ 168000000UL
#define STM32_CYCLES_PER_LOOP 6 // This will need tweaking or calculating

#define SMALL 0
#define MEDIUM 1
#define LARGE 2

class Nokia6610
{
public:
	Nokia6610();

	//Initializes the Philips PCF8833 LCD Controller
	 void Init(void);

	 // Передача байта (команды или данных) на LCD-контроллер
	 void SendByte(char mode,unsigned char c);

	 // Sets the Row and Column addresses
	 void GotoXY(unsigned char x, unsigned char y);

	 // Lights a single pixel in the specified color at the specified x and y addresses
	 void drawPixel(unsigned char x, unsigned char y, int color);

	 // Draws a line in the specified color from (x0,y0) to (x1,y1)
	 void drawLine(unsigned char x0, unsigned char y0, unsigned char x1, unsigned char y1, int color);

	 // Draws a rectangle in the specified color from (x1,y1) to (x2,y2)
	 void drawRect(unsigned char x0, unsigned char y0, unsigned char x1, unsigned char y1, unsigned char fill, int color);

	 // Draws a line in the specified color at center (x0,y0) with radius
	 void drawCircle(unsigned char x0, unsigned char y0, unsigned char radius, int color);

	 // Draws an ASCII character at the specified (x,y) address and color
	 void drawChar(char c, unsigned char x, unsigned char y,int size, int fColor, int bColor);

	 // Draws a null-terminates character string at the specified (x,y) address, size and color
	 void drawStr(char *ptext, unsigned char x,unsigned char y,int size, int fColor, int bColor);

	 // Writes the entire screen from a bmp file
	 void drawBitmap(unsigned char start_x, unsigned char start_y, unsigned char h_size, unsigned char v_size, unsigned char *bitmap_data);
};

#endif /* NOKIA6610_H_ */
