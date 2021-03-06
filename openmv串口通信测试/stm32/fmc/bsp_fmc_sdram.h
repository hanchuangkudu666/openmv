#ifndef __BSP_FMC_SDRAM_H
#define __BSP_FMC_SDRAM_H

#include "stm32f4xx.h"

//uint32_t Value __attribute__((at (SDRAM_BANK_ADDR))); 分配地址
#define SDRAM_BANK_ADDR ((uint32_t)0xD0000000)
#define W9825G6KH_SIZE (32 * 1024 * 1024)

/*A行列地址信号线*/
#define FMC_A0_GPIO_PORT GPIOF
#define FMC_A0_GPIO_CLK RCC_AHB1Periph_GPIOF
#define FMC_A0_GPIO_PIN GPIO_Pin_0
#define FMC_A0_PINSOURCE GPIO_PinSource0
#define FMC_A0_AF GPIO_AF_FMC

#define FMC_A1_GPIO_PORT GPIOF
#define FMC_A1_GPIO_CLK RCC_AHB1Periph_GPIOF
#define FMC_A1_GPIO_PIN GPIO_Pin_1
#define FMC_A1_PINSOURCE GPIO_PinSource1
#define FMC_A1_AF GPIO_AF_FMC

#define FMC_A2_GPIO_PORT GPIOF
#define FMC_A2_GPIO_CLK RCC_AHB1Periph_GPIOF
#define FMC_A2_GPIO_PIN GPIO_Pin_2
#define FMC_A2_PINSOURCE GPIO_PinSource2
#define FMC_A2_AF GPIO_AF_FMC

#define FMC_A3_GPIO_PORT GPIOF
#define FMC_A3_GPIO_CLK RCC_AHB1Periph_GPIOF
#define FMC_A3_GPIO_PIN GPIO_Pin_3
#define FMC_A3_PINSOURCE GPIO_PinSource3
#define FMC_A3_AF GPIO_AF_FMC

#define FMC_A4_GPIO_PORT GPIOF
#define FMC_A4_GPIO_CLK RCC_AHB1Periph_GPIOF
#define FMC_A4_GPIO_PIN GPIO_Pin_4
#define FMC_A4_PINSOURCE GPIO_PinSource4
#define FMC_A4_AF GPIO_AF_FMC

#define FMC_A5_GPIO_PORT GPIOF
#define FMC_A5_GPIO_CLK RCC_AHB1Periph_GPIOF
#define FMC_A5_GPIO_PIN GPIO_Pin_5
#define FMC_A5_PINSOURCE GPIO_PinSource5
#define FMC_A5_AF GPIO_AF_FMC

#define FMC_A6_GPIO_PORT GPIOF
#define FMC_A6_GPIO_CLK RCC_AHB1Periph_GPIOF
#define FMC_A6_GPIO_PIN GPIO_Pin_12
#define FMC_A6_PINSOURCE GPIO_PinSource12
#define FMC_A6_AF GPIO_AF_FMC

#define FMC_A7_GPIO_PORT GPIOF
#define FMC_A7_GPIO_CLK RCC_AHB1Periph_GPIOF
#define FMC_A7_GPIO_PIN GPIO_Pin_13
#define FMC_A7_PINSOURCE GPIO_PinSource13
#define FMC_A7_AF GPIO_AF_FMC

#define FMC_A8_GPIO_PORT GPIOF
#define FMC_A8_GPIO_CLK RCC_AHB1Periph_GPIOF
#define FMC_A8_GPIO_PIN GPIO_Pin_14
#define FMC_A8_PINSOURCE GPIO_PinSource14
#define FMC_A8_AF GPIO_AF_FMC

#define FMC_A9_GPIO_PORT GPIOF
#define FMC_A9_GPIO_CLK RCC_AHB1Periph_GPIOF
#define FMC_A9_GPIO_PIN GPIO_Pin_15
#define FMC_A9_PINSOURCE GPIO_PinSource15
#define FMC_A9_AF GPIO_AF_FMC

#define FMC_A10_GPIO_PORT GPIOG
#define FMC_A10_GPIO_CLK RCC_AHB1Periph_GPIOG
#define FMC_A10_GPIO_PIN GPIO_Pin_0
#define FMC_A10_PINSOURCE GPIO_PinSource0
#define FMC_A10_AF GPIO_AF_FMC

#define FMC_A11_GPIO_PORT GPIOG
#define FMC_A11_GPIO_CLK RCC_AHB1Periph_GPIOG
#define FMC_A11_GPIO_PIN GPIO_Pin_1
#define FMC_A11_PINSOURCE GPIO_PinSource1
#define FMC_A11_AF GPIO_AF_FMC

#define FMC_A12_GPIO_PORT GPIOG
#define FMC_A12_GPIO_CLK RCC_AHB1Periph_GPIOG
#define FMC_A12_GPIO_PIN GPIO_Pin_2
#define FMC_A12_PINSOURCE GPIO_PinSource2
#define FMC_A12_AF GPIO_AF_FMC

/*BA地址线*/
#define FMC_BA0_GPIO_PORT GPIOG
#define FMC_BA0_GPIO_CLK RCC_AHB1Periph_GPIOG
#define FMC_BA0_GPIO_PIN GPIO_Pin_4
#define FMC_BA0_PINSOURCE GPIO_PinSource4
#define FMC_BA0_AF GPIO_AF_FMC

#define FMC_BA1_GPIO_PORT GPIOG
#define FMC_BA1_GPIO_CLK RCC_AHB1Periph_GPIOG
#define FMC_BA1_GPIO_PIN GPIO_Pin_5
#define FMC_BA1_PINSOURCE GPIO_PinSource5
#define FMC_BA1_AF GPIO_AF_FMC

/*DQ数据信号线*/
#define FMC_D0_GPIO_PORT GPIOD
#define FMC_D0_GPIO_CLK RCC_AHB1Periph_GPIOD
#define FMC_D0_GPIO_PIN GPIO_Pin_14
#define FMC_D0_PINSOURCE GPIO_PinSource14
#define FMC_D0_AF GPIO_AF_FMC

#define FMC_D1_GPIO_PORT GPIOD
#define FMC_D1_GPIO_CLK RCC_AHB1Periph_GPIOD
#define FMC_D1_GPIO_PIN GPIO_Pin_15
#define FMC_D1_PINSOURCE GPIO_PinSource15
#define FMC_D1_AF GPIO_AF_FMC

#define FMC_D2_GPIO_PORT GPIOD
#define FMC_D2_GPIO_CLK RCC_AHB1Periph_GPIOD
#define FMC_D2_GPIO_PIN GPIO_Pin_0
#define FMC_D2_PINSOURCE GPIO_PinSource0
#define FMC_D2_AF GPIO_AF_FMC

#define FMC_D3_GPIO_PORT GPIOD
#define FMC_D3_GPIO_CLK RCC_AHB1Periph_GPIOD
#define FMC_D3_GPIO_PIN GPIO_Pin_1
#define FMC_D3_PINSOURCE GPIO_PinSource1
#define FMC_D3_AF GPIO_AF_FMC

#define FMC_D4_GPIO_PORT GPIOE
#define FMC_D4_GPIO_CLK RCC_AHB1Periph_GPIOE
#define FMC_D4_GPIO_PIN GPIO_Pin_7
#define FMC_D4_PINSOURCE GPIO_PinSource7
#define FMC_D4_AF GPIO_AF_FMC

#define FMC_D5_GPIO_PORT GPIOE
#define FMC_D5_GPIO_CLK RCC_AHB1Periph_GPIOE
#define FMC_D5_GPIO_PIN GPIO_Pin_8
#define FMC_D5_PINSOURCE GPIO_PinSource8
#define FMC_D5_AF GPIO_AF_FMC

#define FMC_D6_GPIO_PORT GPIOE
#define FMC_D6_GPIO_CLK RCC_AHB1Periph_GPIOE
#define FMC_D6_GPIO_PIN GPIO_Pin_9
#define FMC_D6_PINSOURCE GPIO_PinSource9
#define FMC_D6_AF GPIO_AF_FMC

#define FMC_D7_GPIO_PORT GPIOE
#define FMC_D7_GPIO_CLK RCC_AHB1Periph_GPIOE
#define FMC_D7_GPIO_PIN GPIO_Pin_10
#define FMC_D7_PINSOURCE GPIO_PinSource10
#define FMC_D7_AF GPIO_AF_FMC

#define FMC_D8_GPIO_PORT GPIOE
#define FMC_D8_GPIO_CLK RCC_AHB1Periph_GPIOE
#define FMC_D8_GPIO_PIN GPIO_Pin_11
#define FMC_D8_PINSOURCE GPIO_PinSource11
#define FMC_D8_AF GPIO_AF_FMC

#define FMC_D9_GPIO_PORT GPIOE
#define FMC_D9_GPIO_CLK RCC_AHB1Periph_GPIOE
#define FMC_D9_GPIO_PIN GPIO_Pin_12
#define FMC_D9_PINSOURCE GPIO_PinSource12
#define FMC_D9_AF GPIO_AF_FMC

#define FMC_D10_GPIO_PORT GPIOE
#define FMC_D10_GPIO_CLK RCC_AHB1Periph_GPIOE
#define FMC_D10_GPIO_PIN GPIO_Pin_13
#define FMC_D10_PINSOURCE GPIO_PinSource13
#define FMC_D10_AF GPIO_AF_FMC

#define FMC_D11_GPIO_PORT GPIOE
#define FMC_D11_GPIO_CLK RCC_AHB1Periph_GPIOE
#define FMC_D11_GPIO_PIN GPIO_Pin_14
#define FMC_D11_PINSOURCE GPIO_PinSource14
#define FMC_D11_AF GPIO_AF_FMC

#define FMC_D12_GPIO_PORT GPIOE
#define FMC_D12_GPIO_CLK RCC_AHB1Periph_GPIOE
#define FMC_D12_GPIO_PIN GPIO_Pin_15
#define FMC_D12_PINSOURCE GPIO_PinSource15
#define FMC_D12_AF GPIO_AF_FMC

#define FMC_D13_GPIO_PORT GPIOD
#define FMC_D13_GPIO_CLK RCC_AHB1Periph_GPIOD
#define FMC_D13_GPIO_PIN GPIO_Pin_8
#define FMC_D13_PINSOURCE GPIO_PinSource8
#define FMC_D13_AF GPIO_AF_FMC

#define FMC_D14_GPIO_PORT GPIOD
#define FMC_D14_GPIO_CLK RCC_AHB1Periph_GPIOD
#define FMC_D14_GPIO_PIN GPIO_Pin_9
#define FMC_D14_PINSOURCE GPIO_PinSource9
#define FMC_D14_AF GPIO_AF_FMC

#define FMC_D15_GPIO_PORT GPIOD
#define FMC_D15_GPIO_CLK RCC_AHB1Periph_GPIOD
#define FMC_D15_GPIO_PIN GPIO_Pin_10
#define FMC_D15_PINSOURCE GPIO_PinSource10
#define FMC_D15_AF GPIO_AF_FMC

/*控制信号线*/
/*CS片选*/
#define FMC_CS_GPIO_PORT GPIOH
#define FMC_CS_GPIO_CLK RCC_AHB1Periph_GPIOH
#define FMC_CS_GPIO_PIN GPIO_Pin_6
#define FMC_CS_PINSOURCE GPIO_PinSource6
#define FMC_CS_AF GPIO_AF_FMC

/*WE写使能*/
#define FMC_WE_GPIO_PORT GPIOC
#define FMC_WE_GPIO_CLK RCC_AHB1Periph_GPIOC
#define FMC_WE_GPIO_PIN GPIO_Pin_0
#define FMC_WE_PINSOURCE GPIO_PinSource0
#define FMC_WE_AF GPIO_AF_FMC
/*RAS行选通*/
#define FMC_RAS_GPIO_PORT GPIOF
#define FMC_RAS_GPIO_CLK RCC_AHB1Periph_GPIOF
#define FMC_RAS_GPIO_PIN GPIO_Pin_11
#define FMC_RAS_PINSOURCE GPIO_PinSource11
#define FMC_RAS_AF GPIO_AF_FMC
/*CAS列选通*/
#define FMC_CAS_GPIO_PORT GPIOG
#define FMC_CAS_GPIO_CLK RCC_AHB1Periph_GPIOG
#define FMC_CAS_GPIO_PIN GPIO_Pin_15
#define FMC_CAS_PINSOURCE GPIO_PinSource15
#define FMC_CAS_AF GPIO_AF_FMC
/*CLK同步时钟，存储区域2*/
#define FMC_CLK_GPIO_PORT GPIOG
#define FMC_CLK_GPIO_CLK RCC_AHB1Periph_GPIOG
#define FMC_CLK_GPIO_PIN GPIO_Pin_8
#define FMC_CLK_PINSOURCE GPIO_PinSource8
#define FMC_CLK_AF GPIO_AF_FMC
/*CKE时钟使能，存储区域2*/
#define FMC_CKE_GPIO_PORT GPIOH
#define FMC_CKE_GPIO_CLK RCC_AHB1Periph_GPIOH
#define FMC_CKE_GPIO_PIN GPIO_Pin_7
#define FMC_CKE_PINSOURCE GPIO_PinSource7
#define FMC_CKE_AF GPIO_AF_FMC

/*DQM1数据掩码*/
#define FMC_UDQM_GPIO_PORT GPIOE
#define FMC_UDQM_GPIO_CLK RCC_AHB1Periph_GPIOE
#define FMC_UDQM_GPIO_PIN GPIO_Pin_1
#define FMC_UDQM_PINSOURCE GPIO_PinSource1
#define FMC_UDQM_AF GPIO_AF_FMC
/*DQM0数据掩码*/
#define FMC_LDQM_GPIO_PORT GPIOE
#define FMC_LDQM_GPIO_CLK RCC_AHB1Periph_GPIOE
#define FMC_LDQM_GPIO_PIN GPIO_Pin_0
#define FMC_LDQM_PINSOURCE GPIO_PinSource0
#define FMC_LDQM_AF GPIO_AF_FMC

/*FMC SDRAM 模式配置的寄存器相关定义*/
/**
  * @brief   突发长度
  */
#define SDRAM_MODEREG_BURST_LENGTH_1 ((uint16_t)0x0000)
#define SDRAM_MODEREG_BURST_LENGTH_2 ((uint16_t)0x0001)
#define SDRAM_MODEREG_BURST_LENGTH_4 ((uint16_t)0x0002)
#define SDRAM_MODEREG_BURST_LENGTH_8 ((uint16_t)0x0003)
/**
  * @brief   突发模式
  */
#define SDRAM_MODEREG_BURST_TYPE_SEQUENTIAL ((uint16_t)0x0000)
#define SDRAM_MODEREG_BURST_TYPE_INTERLEAVED ((uint16_t)0x0008)
/**
  * @brief   模式寄存器中的 CASLatency 是指列地址选通延迟
  */
#define SDRAM_MODEREG_CAS_LATENCY_2 ((uint16_t)0x0020)
#define SDRAM_MODEREG_CAS_LATENCY_3 ((uint16_t)0x0030)
/**
  * @brief   SDRAM 的工作模式
  */
#define SDRAM_MODEREG_OPERATING_MODE_STANDARD ((uint16_t)0x0000)
/**
  * @brief   用于配置写操作的突发特性
  */
#define SDRAM_MODEREG_WRITEBURST_MODE_PROGRAMMED ((uint16_t)0x0000)
#define SDRAM_MODEREG_WRITEBURST_MODE_SINGLE ((uint16_t)0x0200)

void FMC_SDRAM_Init(void);

#endif /* __BSP_FMC_SDRAM_H */
