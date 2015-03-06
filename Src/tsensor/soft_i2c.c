
#include "soft_i2c.h"

void I2C_delay(void)
{
   unsigned int i=150;
   while(i)
   {
     i--;
   }
}
 
uint8_t I2C_Start(void)
{
 SDAH;
 SCLH;
 I2C_delay();
 if(~SDAread)return 0;
 SDAL;
 I2C_delay();
 if(SDAread) return 0;
 SDAL;
 I2C_delay();
 return 1;
}
 
void I2C_Stop(void)
{
 SCLL;
 I2C_delay();
 SDAL;
 I2C_delay();
 SCLH;
 I2C_delay();
 SDAH;
 I2C_delay();
}
 
void I2C_Ack(void)
{
 SCLL;
 I2C_delay();
 SDAL;
 I2C_delay();
 SCLH;
 I2C_delay();
 SCLL;
 I2C_delay();
}
 
void I2C_NoAck(void)
{
 SCLL;
 I2C_delay();
 SDAH;
 I2C_delay();
 SCLH;
 I2C_delay();
 SCLL;
 I2C_delay();
}
 
uint8_t I2C_WaitAck(void)  
{
 SCLL;
 I2C_delay();
 SDAH;  
 I2C_delay();
 SCLH;
 I2C_delay();
 if(SDAread)
 {
          SCLL;
          return 0;
 }
 SCLL;
 return 1;
}
 
void I2C_SendByte(unsigned char SendByte)
{
    unsigned char i=8;
    while(i--)
    {
        SCLL;
        I2C_delay();
        if(SendByte&0x80)
         SDAH;

        else
        SDAL;  

        SendByte<<=1;
        I2C_delay();
 SCLH;
        I2C_delay();
    }
    SCLL;
}
 
unsigned char I2C_ReceiveByte(void)  
{
    unsigned char i=8;
    unsigned char ReceiveByte=0;
 
    SDAH;    
    while(i--)
    {
      ReceiveByte<<=1;      
      SCLL;
      I2C_delay();
      SCLH;
      I2C_delay();
      if(SDAread)
      {
        ReceiveByte|=0x01;
      }
    }
    SCLL;
    return ReceiveByte;
}
 
 
 unsigned char I2C_ReadByte( unsigned char DeviceAddress, int ReadAddress)
{  
    unsigned char MSB,LSB;
    float temperature = 0.0;
    if(!I2C_Start())return 0;    
 
    I2C_SendByte((DeviceAddress & 0xFE));
    if(!I2C_WaitAck()){I2C_Stop(); return 0;}
   
 
        I2C_SendByte((unsigned char)((ReadAddress>>8) & 0xFF));    
    I2C_WaitAck();
    I2C_SendByte((unsigned char)((ReadAddress) & 0xFF));        
    I2C_WaitAck();
    I2C_Start();
    I2C_SendByte((DeviceAddress & 0xFE)|0x01);    
    I2C_WaitAck();
   
    MSB = I2C_ReceiveByte();
		I2C_Ack();
    LSB = I2C_ReceiveByte();
    I2C_NoAck();
     
    I2C_Stop();

    

    return  MSB;
}
