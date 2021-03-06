#ifndef __BSP_TOUCH_H
#define __BSP_TOUCH_H

#include "stm32f4xx.h"

#define TOUCH_HARD_IIC 1

#define I2C_TOUCH_GPIO_CLK RCC_AHB1Periph_GPIOH
#define I2C_TOUCH_GPIO_AF GPIO_AF_I2C2

#define I2C_TOUCH_SCL_GPIO_PORT GPIOH
#define I2C_TOUCH_SCL_GPIO_PIN GPIO_Pin_4
#define I2C_TOUCH_SCL_GPIO_SOURCE GPIO_PinSource4

#define I2C_TOUCH_SDA_GPIO_PORT GPIOH
#define I2C_TOUCH_SDA_GPIO_PIN GPIO_Pin_5
#define I2C_TOUCH_SDA_GPIO_SOURCE GPIO_PinSource5

#define GTP_RST_GPIO_PORT GPIOI
#define GTP_RST_GPIO_CLK RCC_AHB1Periph_GPIOI
#define GTP_RST_GPIO_PIN GPIO_Pin_8

#define GTP_RST_GPIO_PORT GPIOI
#define GTP_RST_GPIO_CLK RCC_AHB1Periph_GPIOI
#define GTP_RST_GPIO_PIN GPIO_Pin_8
/*中断引脚*/
#define GTP_INT_GPIO_PORT GPIOD
#define GTP_INT_GPIO_CLK RCC_AHB1Periph_GPIOD
#define GTP_INT_GPIO_PIN GPIO_Pin_13
#define GTP_INT_EXTI_PORTSOURCE EXTI_PortSourceGPIOD
#define GTP_INT_EXTI_PINSOURCE EXTI_PinSource13
#define GTP_INT_EXTI_LINE EXTI_Line13
#define GTP_INT_EXTI_IRQ EXTI15_10_IRQn
/*中断服务函数*/
#define GTP_IRQHandler EXTI15_10_IRQHandler

#define I2CX_TOUCH I2C2
#define I2C_TOUCH_CLK RCC_APB1Periph_I2C2
#define I2C_TOUCH_SPEED 400000
#define I2C_TOUCH_OWNADDR 0x0A

#define IIC_TOUCH_SCL_HIGH GPIO_SetBits(I2C_TOUCH_SCL_GPIO_PORT, I2C_TOUCH_SCL_GPIO_PIN)
#define IIC_TOUCH_SCL_LOW GPIO_ResetBits(I2C_TOUCH_SCL_GPIO_PORT, I2C_TOUCH_SCL_GPIO_PIN)
#define IIC_TOUCH_SDA_HIGH GPIO_SetBits(I2C_TOUCH_SDA_GPIO_PORT, I2C_TOUCH_SDA_GPIO_PIN)
#define IIC_TOUCH_SDA_LOW GPIO_ResetBits(I2C_TOUCH_SDA_GPIO_PORT, I2C_TOUCH_SDA_GPIO_PIN)
#define IIC_TOUCH_SDA_READ GPIO_ReadInputDataBit(I2C_TOUCH_SDA_GPIO_PORT, I2C_TOUCH_SDA_GPIO_PIN)

#define IIC_TOUCH_READ_DIRECTION 0X01
#define IIC_TOUCH_WRITE_DIRECTION 0X00

#define GTP_ADDRESS 0xBA
#define GTP_MAX_TOUCH 10
#define GTP_COMMAND 0x8040
#define GTP_PRODUCTID 0x8140
#define GTP_STATE 0x814e
#define GTP_POINT 0x8150

typedef struct
{
		uint8_t TrackID;
    int16_t PointX;
    int16_t PointY;
    int16_t PointS;
}TOUCH_POINT;

void I2C_Touch_Init(void);
void GT91x_Touch_Get(void);

#endif /* __BSP_TOUCH_H */
