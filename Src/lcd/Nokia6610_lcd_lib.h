#ifndef __STM32F2xx_RTC_H
#define __STM32F2xx_RTC_H

#ifdef __cplusplus
 extern "C" {
#endif

#include "stm32f4xx.h"
#include "stm32f4xx_hal_gpio.h"
// Р В РЎСљР В РЎвЂўР В РЎпїЅР В Р’ВµР РЋР вЂљР В Р’В° Р В Р вЂ Р РЋРІР‚в„–Р В Р вЂ Р В РЎвЂўР В РўвЂ�Р В РЎвЂўР В Р вЂ  Р В РЎвЂ”Р В РЎвЂўР РЋР вЂљР РЋРІР‚С™Р В Р’В°, Р В РЎвЂќ Р В РЎвЂќР В РЎвЂўР РЋРІР‚С™Р В РЎвЂўР РЋР вЂљР РЋРІР‚в„–Р В РЎпїЅ Р В РЎвЂ”Р В РЎвЂўР В РўвЂ�Р В РЎвЂќР В Р’В»Р РЋР вЂ№Р РЋРІР‚РЋР В Р’ВµР В Р вЂ¦Р РЋРІР‚в„– Р В Р вЂ Р РЋРІР‚в„–Р В Р вЂ Р В РЎвЂўР В РўвЂ�Р РЋРІР‚в„– LCD-Р В РЎвЂќР В РЎвЂўР В Р вЂ¦Р РЋРІР‚С™Р РЋР вЂљР В РЎвЂўР В Р’В»Р В Р’В»Р В Р’ВµР РЋР вЂљР В Р’В°



#define SCLK_LCD_PIN    3
#define SDA_LCD_PIN     2
#define CS_LCD_PIN      1
#define RST_LCD_PIN     0

// Р В РЎв„ўР В РЎвЂўР В РЎпїЅР В Р’В°Р В Р вЂ¦Р В РўвЂ�Р РЋРІР‚в„– Р В РЎвЂќР В РЎвЂўР В Р вЂ¦Р РЋРІР‚С™Р РЋР вЂљР В РЎвЂўР В Р’В»Р В Р’В»Р В Р’ВµР РЋР вЂљР В Р’В° PCF8833
   
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

//**********************************************************************************************
//   ! Р В РЎС™Р В РЎвЂ�Р В Р вЂ¦Р В РЎвЂ�Р В РЎпїЅР В Р’В°Р В Р’В»Р РЋР Р‰Р В Р вЂ¦Р В Р’В°Р РЋР РЏ Р В Р’В·Р В Р’В°Р В РўвЂ�Р В Р’ВµР РЋР вЂљР В Р’В¶Р В РЎвЂќР В Р’В°, Р В РЎвЂ”Р РЋР вЂљР В РЎвЂ� Р В РЎвЂќР В РЎвЂўР РЋРІР‚С™Р В РЎвЂўР РЋР вЂљР В РЎвЂўР В РІвЂћвЂ“ Р РЋР вЂљР В Р’В°Р В Р’В±Р В РЎвЂўР РЋРІР‚С™Р В Р’В°Р В Р’ВµР РЋРІР‚С™ Р В РЎпїЅР В РЎвЂўР В РІвЂћвЂ“ LCD-Р В РЎвЂќР В РЎвЂўР В Р вЂ¦Р РЋРІР‚С™Р РЋР вЂљР В РЎвЂўР В Р’В»Р В Р’В»Р В Р’ВµР РЋР вЂљ 0                         *
//   ! Р В РІР‚в„ў Р В РЎвЂ”Р В Р’В°Р РЋР вЂљР В Р’В°Р В РЎпїЅР В Р’ВµР РЋРІР‚С™Р РЋР вЂљР В Р’В°Р РЋРІР‚В¦ Р В РЎвЂ”Р РЋР вЂљР В РЎвЂўР В Р’ВµР В РЎвЂќР РЋРІР‚С™Р В Р’В° Р РЋРІР‚РЋР В Р’В°Р РЋР С“Р РЋРІР‚С™Р В РЎвЂўР РЋРІР‚С™Р В Р’В° 8Р В РЎС™Р В РІР‚СљР РЋРІР‚В , Atmega Р РЋР вЂљР В Р’В°Р В Р’В±Р В РЎвЂўР РЋРІР‚С™Р В Р’В°Р В Р’ВµР РЋРІР‚С™ Р В Р вЂ¦Р В Р’В° 8Р В РЎС™Р В РІР‚СљР РЋРІР‚В   RC-Р В РЎвЂ“Р В Р’ВµР В Р вЂ¦Р В Р’ВµР РЋР вЂљР В Р’В°Р РЋРІР‚С™Р В РЎвЂўР РЋР вЂљ                *
//   ! Р В РЎСџР В РЎвЂўР В РўвЂ�Р В Р’В±Р В РЎвЂ�Р РЋР вЂљР В Р’В°Р В Р’ВµР РЋРІР‚С™Р РЋР С“Р РЋР РЏ Р В РЎвЂ”Р В РЎвЂўР В РўвЂ� Р В РЎвЂќР В РЎвЂўР В Р вЂ¦Р В РЎвЂќР РЋР вЂљР В Р’ВµР РЋРІР‚С™Р В Р вЂ¦Р РЋРІР‚в„–Р В РІвЂћвЂ“ Р В РЎвЂќР В РЎвЂўР В Р вЂ¦Р РЋРІР‚С™Р РЋР вЂљР В РЎвЂўР В Р’В»Р В Р’В»Р В Р’ВµР РЋР вЂљ - Р РЋР С“Р В РЎвЂ”Р В Р’В»Р В РЎвЂўР РЋРІвЂљВ¬Р РЋР Р‰ Р В РЎвЂ� Р РЋР вЂљР РЋР РЏР В РўвЂ�Р В РЎвЂўР В РЎпїЅ LCD Р В РЎвЂ�Р В Р’В·Р В РЎвЂ“Р В РЎвЂўР РЋРІР‚С™Р В РЎвЂўР В Р вЂ Р В Р’В»Р В Р’ВµР В Р вЂ¦Р В Р вЂ¦Р РЋРІР‚в„–Р В Р’Вµ Р В РўвЂ�Р РЋР РЏР В РўвЂ�Р РЋР вЂ№Р РЋРІвЂљВ¬Р В РЎвЂќР В РЎвЂўР В РІвЂћвЂ“ Р В РІР‚С”Р В РЎвЂ�    *
#define NLCD_MIN_DELAY	0                                                                    
//**********************************************************************************************
// Р В РЎС™Р В Р’В°Р В РЎвЂќР РЋР вЂљР В РЎвЂўР РЋР С“Р РЋРІР‚в„– Р В РЎвЂ� Р В РЎвЂўР В РЎвЂ”Р РЋР вЂљР В Р’ВµР В РўвЂ�Р В Р’ВµР В Р’В»Р В Р’ВµР В Р вЂ¦Р В РЎвЂ�Р РЋР РЏ

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

//******************************************************************************
// Р В РЎСџР РЋР вЂљР В РЎвЂ�Р В РЎпїЅР В Р’ВµР В Р вЂ¦Р РЋР РЏР В Р’ВµР В РЎпїЅ Р В РЎвЂ”Р В РЎвЂўР В Р’В»Р В Р вЂ¦Р РЋРІР‚в„–Р В РІвЂћвЂ“ Р В Р вЂ¦Р В Р’В°Р В Р’В±Р В РЎвЂўР РЋР вЂљ Р РЋР С“Р В РЎвЂ�Р В РЎпїЅР В Р вЂ Р В РЎвЂўР В Р’В»Р В РЎвЂўР В Р вЂ : Р В Р вЂ Р В РЎвЂќР В Р’В».- Р В Р’В°Р В Р вЂ¦Р В РЎвЂ“Р В Р’В». Р В РЎвЂ� Р РЋР вЂљР РЋРЎвЂњР РЋР С“Р РЋР С“Р В РЎвЂќ.    Р В Р вЂ Р РЋРІР‚в„–Р В РЎвЂќР В Р’В». - Р РЋРІР‚С™Р В РЎвЂўР В Р’В»Р РЋР Р‰Р В РЎвЂќР В РЎвЂў Р В Р’В°Р В Р вЂ¦Р В РЎвЂ“Р В Р’В».
#define FULL_CHARSET 
//******************************************************************************
// Р В РІР‚пїЅР В Р’В°Р В Р’В·Р В РЎвЂўР В Р вЂ Р РЋРІР‚в„–Р В Р’Вµ Р РЋРІР‚В Р В Р вЂ Р В Р’ВµР РЋРІР‚С™Р В Р’В°

#define WHITE     0xFFF       // Р В РІР‚пїЅР В Р’ВµР В Р’В»Р РЋРІР‚в„–Р В РІвЂћвЂ“
#define BLACK     0x000       // Р В Р’В§Р В Р’ВµР РЋР вЂљР В Р вЂ¦Р РЋРІР‚в„–Р В РІвЂћвЂ“
#define RED       0xF00       // Р В РЎв„ўР РЋР вЂљР В Р’В°Р РЋР С“Р В Р вЂ¦Р РЋРІР‚в„–Р В РІвЂћвЂ“
#define GREEN     0x0F0       // Р В РІР‚вЂќР В Р’ВµР В Р’В»Р В Р’ВµР В Р вЂ¦Р РЋРІР‚в„–Р В РІвЂћвЂ“
#define BLUE      0x00F       // Р В Р Р‹Р В РЎвЂ�Р В Р вЂ¦Р В РЎвЂ�Р В РІвЂћвЂ“
#define CYAN      0x1FF       // Р В РІР‚пїЅР В РЎвЂ�Р РЋР вЂљР РЋР вЂ№Р В Р’В·Р В РЎвЂўР В Р вЂ Р РЋРІР‚в„–Р В РІвЂћвЂ“
#define MAGENTA   0xF0F       // Р В Р’В¤Р В РЎвЂ�Р В РЎвЂўР В Р’В»Р В Р’ВµР РЋРІР‚С™Р В РЎвЂўР В Р вЂ Р РЋРІР‚в„–Р В РІвЂћвЂ“
#define YELLOW    0xFF0       // Р В РІР‚вЂњР В Р’ВµР В Р’В»Р РЋРІР‚С™Р РЋРІР‚в„–Р В РІвЂћвЂ“
#define GRAY	  0x222       // Р В Р Р‹Р В Р’ВµР РЋР вЂљР РЋРІР‚в„–Р В РІвЂћвЂ“
#define LIGHTBLUE 0xADE       // Р В Р Р‹Р В Р вЂ Р В Р’ВµР РЋРІР‚С™Р В Р’В»Р В РЎвЂў-Р В РЎвЂ“Р В РЎвЂўР В Р’В»Р РЋРЎвЂњР В Р’В±Р В РЎвЂўР В РІвЂћвЂ“
#define PINK      0xF6A       // Р В Р’В Р В РЎвЂўР В Р’В·Р В РЎвЂўР В Р вЂ Р РЋРІР‚в„–Р В РІвЂћвЂ“
#define BROWN     0xB22       // Р В РЎв„ўР В РЎвЂўР РЋР вЂљР В РЎвЂ�Р РЋРІР‚РЋР В Р вЂ¦Р В Р’ВµР В Р вЂ Р РЋРІР‚в„–Р В РІвЂћвЂ“
#define ORANGE    0xFA0       // Р В РЎвЂєР РЋР вЂљР В Р’В°Р В Р вЂ¦Р В Р’В¶Р В Р’ВµР В Р вЂ Р РЋРІР‚в„–Р В РІвЂћвЂ“

//******************************************************************************
// Р В РЎСџР РЋР вЂљР В РЎвЂўР РЋРІР‚С™Р В РЎвЂўР РЋРІР‚С™Р В РЎвЂ�Р В РЎвЂ”Р РЋРІР‚в„– Р РЋРІР‚С›Р РЋРЎвЂњР В Р вЂ¦Р В РЎвЂќР РЋРІР‚В Р В РЎвЂ�Р В РІвЂћвЂ“

// Р В РїС—Р…Р В Р вЂ¦Р В РЎвЂ�Р РЋРІР‚В Р В РЎвЂ�Р В Р’В°Р В Р’В»Р В РЎвЂ�Р В Р’В·Р В Р’В°Р РЋРІР‚В Р В РЎвЂ�Р РЋР РЏ Р В РўвЂ�Р В РЎвЂ�Р РЋР С“Р В РЎвЂ”Р В Р’В»Р В Р’ВµР РЋР РЏ + Р В Р’В·Р В Р’В°Р В Р’В»Р В РЎвЂ�Р В Р вЂ Р В РЎвЂќР В Р’В° Р РЋРІР‚С›Р В РЎвЂўР В Р вЂ¦Р В Р’В°
void nlcd_Init(void);

// Р В РЎСџР В Р’ВµР РЋР вЂљР В Р’ВµР В РўвЂ�Р В Р’В°Р РЋРІР‚РЋР В Р’В° Р В Р’В±Р В Р’В°Р В РІвЂћвЂ“Р РЋРІР‚С™Р В Р’В° (Р В РЎвЂќР В РЎвЂўР В РЎпїЅР В Р’В°Р В Р вЂ¦Р В РўвЂ�Р РЋРІР‚в„– Р В РЎвЂ�Р В Р’В»Р В РЎвЂ� Р В РўвЂ�Р В Р’В°Р В Р вЂ¦Р В Р вЂ¦Р РЋРІР‚в„–Р РЋРІР‚В¦) Р В Р вЂ¦Р В Р’В° LCD-Р В РЎвЂќР В РЎвЂўР В Р вЂ¦Р РЋРІР‚С™Р РЋР вЂљР В РЎвЂўР В Р’В»Р В Р’В»Р В Р’ВµР РЋР вЂљ
void nlcd_SendByte(char mode,unsigned char c);

// Р В Р в‚¬Р РЋР С“Р РЋРІР‚С™Р В Р’В°Р В Р вЂ¦Р В Р’В°Р В Р вЂ Р В Р’В»Р В РЎвЂ�Р В Р вЂ Р В Р’В°Р В Р’ВµР РЋРІР‚С™ Р РЋРІР‚С™Р В Р’ВµР В РЎвЂќР РЋРЎвЂњР РЋРІР‚В°Р В РЎвЂ�Р В Р’Вµ Р В РЎвЂќР В РЎвЂўР В РЎвЂўР РЋР вЂљР В РўвЂ�Р В РЎвЂ�Р В Р вЂ¦Р В Р’В°Р РЋРІР‚С™Р РЋРІР‚в„– x, y Р В Р вЂ  Р В Р’В·Р В Р вЂ¦Р В Р’В°Р В РЎвЂќР В РЎвЂўР В РЎпїЅР В Р’ВµР РЋР С“Р РЋРІР‚С™Р В Р’В°Р РЋРІР‚В¦
void nlcd_GotoXY(unsigned char x, unsigned char y);

// Р В Р в‚¬Р РЋР С“Р РЋРІР‚С™Р В Р’В°Р В Р вЂ¦Р В Р’В°Р В Р вЂ Р В Р’В»Р В РЎвЂ�Р В Р вЂ Р В Р’В°Р В Р’ВµР РЋРІР‚С™ Pixel Р В Р вЂ  Р В РЎвЂ”Р В РЎвЂўР В Р’В·Р В РЎвЂ�Р РЋРІР‚В Р В РЎвЂ�Р РЋР вЂ№ x, y, Р РЋРІР‚В Р В Р вЂ Р В Р’ВµР РЋРІР‚С™Р В РЎвЂўР В РЎпїЅ color
void nlcd_Pixel(unsigned char x, unsigned char y, int color);

// Р В Р’В Р В РЎвЂ�Р РЋР С“Р РЋРЎвЂњР В Р’ВµР РЋРІР‚С™ Р В Р’В»Р В РЎвЂ�Р В Р вЂ¦Р В РЎвЂ�Р РЋР вЂ№ Р В РЎвЂ�Р В Р’В· Р В РЎвЂќР В РЎвЂўР В РЎвЂўР РЋР вЂљР В РўвЂ�Р В РЎвЂ�Р В Р вЂ¦Р В Р’В°Р РЋРІР‚С™Р РЋРІР‚в„– x0, y0 Р В Р вЂ  Р В РЎвЂќР В РЎвЂўР В РЎвЂўР РЋР вЂљР В РўвЂ�Р В РЎвЂ�Р В Р вЂ¦Р В Р’В°Р РЋРІР‚С™Р РЋРЎвЂњ x1, y1 Р РЋРІР‚В Р В Р вЂ Р В Р’ВµР РЋРІР‚С™Р В РЎвЂўР В РЎпїЅ color
void nlcd_Line(unsigned char x0, unsigned char y0, unsigned char x1, unsigned char y1, int color);

// Р В Р’В Р В РЎвЂ�Р РЋР С“Р РЋРЎвЂњР В Р’ВµР РЋРІР‚С™ Р В РЎвЂ”Р РЋР вЂљР РЋР РЏР В РЎпїЅР В РЎвЂўР РЋРЎвЂњР В РЎвЂ“Р В РЎвЂўР В Р’В»Р РЋР Р‰Р В Р вЂ¦Р В РЎвЂ�Р В РЎвЂќ Р В РЎвЂ�Р В Р’В· Р В РЎвЂќР В РЎвЂўР В РЎвЂўР РЋР вЂљР В РўвЂ�Р В РЎвЂ�Р В Р вЂ¦Р В Р’В°Р РЋРІР‚С™Р РЋРІР‚в„– x0, y0 Р В Р вЂ  Р В РЎвЂќР В РЎвЂўР В РЎвЂўР РЋР вЂљР В РўвЂ�Р В РЎвЂ�Р В Р вЂ¦Р В Р’В°Р РЋРІР‚С™Р РЋРЎвЂњ x1, y1 Р РЋР С“ Р В Р’В·Р В Р’В°Р В Р’В»Р В РЎвЂ�Р В Р вЂ Р В РЎвЂќР В РЎвЂўР В РІвЂћвЂ“ Р В РЎвЂ�Р В Р’В»Р В РЎвЂ� Р В Р вЂ¦Р В Р’ВµР РЋРІР‚С™, Р РЋРІР‚В Р В Р вЂ Р В Р’ВµР РЋРІР‚С™Р В РЎвЂўР В РЎпїЅ color
void nlcd_Box(unsigned char x0, unsigned char y0, unsigned char x1, unsigned char y1, unsigned char fill, int color);

// Р В Р’В Р В РЎвЂ�Р РЋР С“Р РЋРЎвЂњР В Р’ВµР РЋРІР‚С™ Р В РЎвЂќР РЋР вЂљР РЋРЎвЂњР В РЎвЂ“ Р В РЎвЂ�Р В Р’В· Р В РЎвЂќР В РЎвЂўР В РЎвЂўР РЋР вЂљР В РўвЂ�Р В РЎвЂ�Р В Р вЂ¦Р В Р’В°Р РЋРІР‚С™Р РЋРІР‚в„– x0, y0, Р РЋР С“ Р РЋР вЂљР В Р’В°Р В РўвЂ�Р В РЎвЂ�Р РЋРЎвЂњР РЋР С“Р В РЎвЂўР В РЎпїЅ (Р В Р вЂ  Pixel), Р В Р’В±Р В Р’ВµР В Р’В· Р В Р’В·Р В Р’В°Р В Р’В»Р В РЎвЂ�Р В Р вЂ Р В РЎвЂќР В РЎвЂ� Р РЋРІР‚В Р В Р вЂ Р В Р’ВµР РЋРІР‚С™Р В РЎвЂўР В РЎпїЅ color
void nlcd_Circle(unsigned char x0, unsigned char y0, unsigned char radius, int color);

// Р В Р в‚¬Р РЋР С“Р РЋРІР‚С™Р В Р’В°Р В Р вЂ¦Р В Р’В°Р В Р вЂ Р В Р’В»Р В РЎвЂ�Р В Р вЂ Р В Р’В°Р В Р’ВµР РЋРІР‚С™ Р В РЎвЂќР РЋРЎвЂњР РЋР вЂљР РЋР С“Р В РЎвЂўР РЋР вЂљ Р В Р вЂ  Р В РЎвЂќР В РЎвЂўР В РЎвЂўР РЋР вЂљР В РўвЂ�Р В РЎвЂ�Р В Р вЂ¦Р В Р’В°Р РЋРІР‚С™Р РЋРІР‚в„– x, y, Р РЋРІР‚В Р В Р вЂ Р В Р’ВµР РЋРІР‚С™Р В РЎвЂўР В РЎпїЅ fColor, Р В РЎвЂ� Р РЋРІР‚С›Р В РЎвЂўР В Р вЂ¦Р В РЎвЂўР В РЎпїЅ bColor
void nlcd_Char(char c, unsigned char x, unsigned char y, int fColor, int bColor);

// Р В РІР‚в„ўР РЋРІР‚в„–Р В Р вЂ Р В РЎвЂўР В РўвЂ�Р В РЎвЂ�Р РЋРІР‚С™ Р РЋРІР‚С™Р В Р’ВµР В РЎвЂќР РЋР С“Р РЋРІР‚С™ Р РЋР С“ Р В РЎвЂќР В РЎвЂўР В РЎвЂўР РЋР вЂљР В РўвЂ�Р В РЎвЂ�Р В Р вЂ¦Р В Р’В°Р РЋРІР‚С™ x, y,Р РЋРІР‚В Р В Р вЂ Р В Р’ВµР РЋРІР‚С™Р В РЎвЂўР В РЎпїЅ Р РЋРІР‚С™Р В Р’ВµР В РЎвЂќР РЋР С“Р РЋРІР‚С™Р В Р’В° fColor, Р В РЎвЂ� Р РЋРІР‚С›Р В РЎвЂўР В Р вЂ¦Р В РЎвЂўР В РЎпїЅ bColor
void nlcd_Text(char *the_text, unsigned char x, unsigned char  y,  int fColor, int bColor);

// Р В РІР‚в„ўР РЋРІР‚в„–Р В Р вЂ Р В РЎвЂўР В РўвЂ�Р В РЎвЂ�Р РЋРІР‚С™ Р В РЎвЂќР В Р’В°Р РЋР вЂљР РЋРІР‚С™Р В РЎвЂ�Р В Р вЂ¦Р В РЎвЂќР РЋРЎвЂњ Р РЋР С“ Р В РЎвЂќР В РЎвЂўР В РЎвЂўР РЋР вЂљР В РўвЂ�Р В РЎвЂ�Р В Р вЂ¦Р В Р’В°Р РЋРІР‚С™ x, y (Р В Р вЂ Р В Р’ВµР РЋР вЂљР РЋРІР‚В¦Р В Р вЂ¦Р В РЎвЂ�Р В РІвЂћвЂ“ Р В Р’В»Р В Р’ВµР В Р вЂ Р РЋРІР‚в„–Р В РІвЂћвЂ“ Р РЋРЎвЂњР В РЎвЂ“Р В РЎвЂўР В Р’В»), Р РЋРІвЂљВ¬Р В РЎвЂ�Р РЋР вЂљР В РЎвЂ�Р В Р вЂ¦Р В Р’В° Р В РЎвЂќР В Р’В°Р РЋР вЂљР РЋРІР‚С™Р В РЎвЂ�Р В Р вЂ¦Р В РЎвЂќР В РЎвЂ� Р В РЎвЂ”Р В РЎвЂў Р В РЎвЂ“Р В РЎвЂўР РЋР вЂљР В РЎвЂ�Р В Р’В·Р В РЎвЂўР В Р вЂ¦Р РЋРІР‚С™Р В Р’В°Р В Р’В»Р В РЎвЂ� Р В РЎвЂ� Р В Р вЂ Р В Р’ВµР РЋР вЂљР РЋРІР‚С™Р В РЎвЂ�Р В РЎвЂќР В Р’В°Р В Р’В»Р В РЎвЂ� Р В Р вЂ  Р В РЎвЂ”Р В РЎвЂ�Р В РЎвЂќР РЋР С“Р В Р’ВµР В Р’В»Р РЋР РЏР РЋРІР‚В¦, Р В РЎвЂ�Р В РЎпїЅР РЋР РЏ Р В РЎпїЅР В Р’В°Р РЋР С“Р РЋР С“Р В РЎвЂ�Р В Р вЂ Р В Р’В° Р РЋР С“ Р В РЎвЂќР В Р’В°Р РЋР вЂљР РЋРІР‚С™Р В РЎвЂ�Р В Р вЂ¦Р В РЎвЂќР В РЎвЂўР В РІвЂћвЂ“
void nlcd_Bitmap(unsigned char start_x, unsigned char start_y, unsigned char h_size, unsigned char v_size, unsigned char *bitmap_data);


#ifdef __cplusplus
}
#endif


#endif
