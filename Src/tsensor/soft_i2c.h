#ifndef SOFT_I2C_H
#define SOFT_I2C_H





#ifdef __cplusplus
 extern "C" {
#endif

#include "stm32f4xx.h"
#include "gpio.h"

#define SCLH GPIOG->BSRR = GPIO_PIN_10  // Set
#define SCLL GPIOG->BSRR=(uint32_t)GPIO_PIN_10 << 16  // Reset

#define SDAH GPIOG->BSRR = GPIO_PIN_12  // Set
#define SDAL GPIOG->BSRR=(uint32_t)GPIO_PIN_12 << 16   // Reset

#define SCLread GPIOG->IDR&GPIO_PIN_10 // Read
#define SDAread GPIOG->IDR&GPIO_PIN_12 // Read

void I2C_delay(void);
uint8_t I2C_Start(void);
void I2C_Stop(void);
void I2C_Ack(void);
void I2C_NoAck(void);
uint8_t I2C_WaitAck(void);
void I2C_SendByte(unsigned char SendByte);
unsigned char I2C_ReceiveByte(void) ;
unsigned char I2C_ReadByte( unsigned char DeviceAddress, int ReadAddress);

#ifdef __cplusplus
}
#endif



#endif





