/********************* (C) COPYRIGHT 2012 e-Design Co.,Ltd. ********************
 Brief   : STM32F10x ϵ�п��ƼĴ�������                          Author : bure
*******************************************************************************/
#ifndef __STM32F10x_H
#define __STM32F10x_H

#include "stm32f10x_lib.h"

#define GPIOA_CRL      (*((vu32 *)(GPIOA_BASE+0x00)))
#define GPIOA_CRH      (*((vu32 *)(GPIOA_BASE+0x04)))
#define GPIOA_IDR      (*((vu32 *)(GPIOA_BASE+0x08)))
#define GPIOA_ODR      (*((vu32 *)(GPIOA_BASE+0x0C)))
#define GPIOA_BSRR     (*((vu32 *)(GPIOA_BASE+0x10)))
#define GPIOA_BRR      (*((vu32 *)(GPIOA_BASE+0x14)))

#define GPIOB_CRL      (*((vu32 *)(GPIOB_BASE+0x00)))
#define GPIOB_CRH      (*((vu32 *)(GPIOB_BASE+0x04)))
#define GPIOB_IDR      (*((vu32 *)(GPIOB_BASE+0x08)))
#define GPIOB_ODR      (*((vu32 *)(GPIOB_BASE+0x0C)))
#define GPIOB_BSRR     (*((vu32 *)(GPIOB_BASE+0x10)))
#define GPIOB_BRR      (*((vu32 *)(GPIOB_BASE+0x14)))

#define GPIOC_CRL      (*((vu32 *)(GPIOC_BASE+0x00)))
#define GPIOC_CRH      (*((vu32 *)(GPIOC_BASE+0x04)))
#define GPIOC_IDR      (*((vu32 *)(GPIOC_BASE+0x08)))
#define GPIOC_ODR      (*((vu32 *)(GPIOC_BASE+0x0C)))
#define GPIOC_BSRR     (*((vu32 *)(GPIOC_BASE+0x10)))
#define GPIOC_BRR      (*((vu32 *)(GPIOC_BASE+0x14)))

#define GPIOD_CRL      (*((vu32 *)(GPIOD_BASE+0x00)))
#define GPIOD_CRH      (*((vu32 *)(GPIOD_BASE+0x04)))
#define GPIOD_IDR      (*((vu32 *)(GPIOD_BASE+0x08)))
#define GPIOD_ODR      (*((vu32 *)(GPIOD_BASE+0x0C)))
#define GPIOD_BSRR     (*((vu32 *)(GPIOD_BASE+0x10)))
#define GPIOD_BRR      (*((vu32 *)(GPIOD_BASE+0x14)))

#define GPIOE_CRL      (*((vu32 *)(GPIOE_BASE+0x00)))
#define GPIOE_CRH      (*((vu32 *)(GPIOE_BASE+0x04)))
#define GPIOE_IDR      (*((vu32 *)(GPIOE_BASE+0x08)))
#define GPIOE_ODR      (*((vu32 *)(GPIOE_BASE+0x0C)))
#define GPIOE_BSRR     (*((vu32 *)(GPIOE_BASE+0x10)))
#define GPIOE_BRR      (*((vu32 *)(GPIOE_BASE+0x14)))

#define GPIOG_ODR      (*((vu32 *)(GPIOG_BASE+0x0C)))

#define RCC_AHBENR     (*(vu32 *)0x40021014)
#define RCC_APB2ENR    (*(vu32 *)0x40021018)
#define RCC_APB1ENR    (*(vu32 *)0x4002101C)
#define RCC_CFGR       (*(vu32 *)0x40021004)

#define FSMC_BCR1   (*((vu32 *)(0xA0000000+0x00)))
#define FSMC_BTR1   (*((vu32 *)(0xA0000000+0x04)))
#define FSMC_BWTR1  (*((vu32 *)(0xA0000000+0x104)))
#define FSMC_BCR2   (*((vu32 *)(0xA0000008+0x00)))
#define FSMC_BTR2   (*((vu32 *)(0xA0000008+0x04)))
#define FSMC_BWTR2  (*((vu32 *)(0xA0000008+0x104)))

#define TIM1_CR1    (*((vu32 *)(0x40012C00+0x00)))
#define TIM1_CR2    (*((vu32 *)(0x40012C00+0x04)))
#define TIM1_DIER   (*((vu32 *)(0x40012C00+0x0C)))
#define TIM1_SR     (*((vu32 *)(0x40012C00+0x10)))
#define TIM1_CCMR1  (*((vu32 *)(0x40012C00+0x18)))
#define TIM1_CCER   (*((vu32 *)(0x40012C00+0x20)))
#define TIM1_PSC    (*((vu32 *)(0x40012C00+0x28)))
#define TIM1_ARR    (*((vu32 *)(0x40012C00+0x2C)))
#define TIM1_RCR    (*((vu32 *)(0x40012C00+0x30)))
#define TIM1_CCR1   (*((vu32 *)(0x40012C00+0x34)))
#define TIM1_BDTR   (*((vu32 *)(0x40012C00+0x44)))

#define TIM2_CR1    (*((vu32 *)(0x40000000+0x00)))
#define TIM2_DIER   (*((vu32 *)(0x40000000+0x0C)))
#define TIM2_SR     (*((vu32 *)(0x40000000+0x10)))
#define TIM2_CCMR1  (*((vu32 *)(0x40000000+0x18)))
#define TIM2_CCMR2  (*((vu32 *)(0x40000000+0x1C)))
#define TIM2_CCER   (*((vu32 *)(0x40000000+0x20)))
#define TIM2_PSC    (*((vu32 *)(0x40000000+0x28)))
#define TIM2_ARR    (*((vu32 *)(0x40000000+0x2C)))
#define TIM2_CCR1   (*((vu32 *)(0x40000000+0x34)))
#define TIM2_CCR2   (*((vu32 *)(0x40000000+0x38)))
#define TIM2_CCR3   (*((vu32 *)(0x40000000+0x3C)))
#define TIM2_CCR4   (*((vu32 *)(0x40000000+0x40)))

#define TIM3_CR1    (*((vu32 *)(0x40000400+0x00)))
#define TIM3_SMCR   (*((vu32 *)(0x40000400+0x08)))
#define TIM3_DIER   (*((vu32 *)(0x40000400+0x0C)))
#define TIM3_SR     (*((vu32 *)(0x40000400+0x10)))
#define TIM3_CCMR1  (*((vu32 *)(0x40000400+0x18)))
#define TIM3_CCMR2  (*((vu32 *)(0x40000400+0x1C)))
#define TIM3_CCER   (*((vu32 *)(0x40000400+0x20)))
#define TIM3_PSC    (*((vu32 *)(0x40000400+0x28)))
#define TIM3_ARR    (*((vu32 *)(0x40000400+0x2C)))
#define TIM3_CCR1   (*((vu32 *)(0x40000400+0x34)))
#define TIM3_CCR2   (*((vu32 *)(0x40000400+0x38)))
#define TIM3_CCR3   (*((vu32 *)(0x40000400+0x3C)))
#define TIM3_CCR4   (*((vu32 *)(0x40000400+0x40)))

#define TIM4_CR1    (*((vu32 *)(0x40000800+0x00)))
#define TIM4_DIER   (*((vu32 *)(0x40000800+0x0C)))
#define TIM4_SR     (*((vu32 *)(0x40000800+0x10)))
#define TIM4_CCMR1  (*((vu32 *)(0x40000800+0x18)))
#define TIM4_CCMR2  (*((vu32 *)(0x40000800+0x1C)))
#define TIM4_CCER   (*((vu32 *)(0x40000800+0x20)))
#define TIM4_PSC    (*((vu32 *)(0x40000800+0x28)))
#define TIM4_ARR    (*((vu32 *)(0x40000800+0x2C)))
#define TIM4_CCR1   (*((vu32 *)(0x40000800+0x34)))
#define TIM4_CCR2   (*((vu32 *)(0x40000800+0x38)))
#define TIM4_CCR3   (*((vu32 *)(0x40000800+0x3C)))
#define TIM4_CCR4   (*((vu32 *)(0x40000800+0x40)))

#define TIM5_CR1    (*((vu32 *)(0x40000C00+0x00)))
#define TIM5_CR2    (*((vu32 *)(0x40000C00+0x04)))
#define TIM5_DIER   (*((vu32 *)(0x40000C00+0x0C)))
#define TIM5_SR     (*((vu32 *)(0x40000C00+0x10)))
#define TIM5_CCMR1  (*((vu32 *)(0x40000C00+0x18)))
#define TIM5_CCMR2  (*((vu32 *)(0x40000C00+0x1C)))
#define TIM5_CCER   (*((vu32 *)(0x40000C00+0x20)))
#define TIM5_PSC    (*((vu32 *)(0x40000C00+0x28)))
#define TIM5_ARR    (*((vu32 *)(0x40000C00+0x2C)))
#define TIM5_CCR1   (*((vu32 *)(0x40000C00+0x34)))
#define TIM5_CCR2   (*((vu32 *)(0x40000C00+0x38)))
#define TIM5_CCR3   (*((vu32 *)(0x40000C00+0x3C)))
#define TIM5_CCR4   (*((vu32 *)(0x40000C00+0x40)))

#define TIM6_CR1    (*((vu32 *)(0x40001000+0x00)))
#define TIM6_CR2    (*((vu32 *)(0x40001000+0x04)))
#define TIM6_DIER   (*((vu32 *)(0x40001000+0x0C)))
#define TIM6_SR     (*((vu32 *)(0x40001000+0x10)))
#define TIM6_CCER   (*((vu32 *)(0x40001000+0x20)))
#define TIM6_PSC    (*((vu32 *)(0x40001000+0x28)))
#define TIM6_ARR    (*((vu32 *)(0x40001000+0x2C)))
#define TIM6_CCR1   (*((vu32 *)(0x40001000+0x34)))
#define TIM6_CCR2   (*((vu32 *)(0x40001000+0x38)))

#define TIM7_CR1    (*((vu32 *)(0x40001400+0x00)))
#define TIM7_CR2    (*((vu32 *)(0x40001400+0x04)))
#define TIM7_DIER   (*((vu32 *)(0x40001400+0x0C)))
#define TIM7_SR     (*((vu32 *)(0x40001400+0x10)))
#define TIM7_CCER   (*((vu32 *)(0x40001400+0x20)))
#define TIM7_PSC    (*((vu32 *)(0x40001400+0x28)))
#define TIM7_ARR    (*((vu32 *)(0x40001400+0x2C)))
#define TIM7_CCR1   (*((vu32 *)(0x40001400+0x34)))
#define TIM7_CCR2   (*((vu32 *)(0x40001400+0x38)))

#define DAC_CR      (*((vu32 *)(DAC_BASE+0x00)))
#define DAC_DHR12R1 (*((vu32 *)(DAC_BASE+0x08)))
#define DAC_DHR12R2 (*((vu32 *)(DAC_BASE+0x14)))
#define DAC_DHR12R1_ADDR ((vu32)(DAC_BASE+0x08))
#define DAC_DHR12R2_ADDR ((vu32)(DAC_BASE+0x14))

#define ADC3_CR1    (*((vu32 *)(0x40013C00+0x04)))
#define ADC3_CR2    (*((vu32 *)(0x40013C00+0x08)))
#define ADC3_SMPR1  (*((vu32 *)(0x40013C00+0x0C)))
#define ADC3_SMPR2  (*((vu32 *)(0x40013C00+0x10)))
#define ADC3_SQR1   (*((vu32 *)(0x40013C00+0x2C)))
#define ADC3_SQR3   (*((vu32 *)(0x40013C00+0x34)))
#define ADC3_DR     (*((vu16 *)(0x40013C00+0x4C)))

#define ADC2_CR1    (*((vu32 *)(0x40012800+0x04)))
#define ADC2_CR2    (*((vu32 *)(0x40012800+0x08)))
#define ADC2_SMPR1  (*((vu32 *)(0x40012800+0x0C)))
#define ADC2_SMPR2  (*((vu32 *)(0x40012800+0x10)))
#define ADC2_SQR1   (*((vu32 *)(0x40012800+0x2C)))
#define ADC2_SQR3   (*((vu32 *)(0x40012800+0x34)))

#define ADC1_CR1    (*((vu32 *)(0x40012400+0x04)))
#define ADC1_CR2    (*((vu32 *)(0x40012400+0x08)))
#define ADC1_SMPR1  (*((vu32 *)(0x40012400+0x0C)))
#define ADC1_SMPR2  (*((vu32 *)(0x40012400+0x10)))
#define ADC1_SQR1   (*((vu32 *)(0x40012400+0x2C)))
#define ADC1_SQR3   (*((vu32 *)(0x40012400+0x34)))
#define ADC1_DR     (*((vu32 *)(0x40012400+0x4C)))
#define ADC1_DR_ADDR     ((u32)(0x4001244C))

//#define CCR1             ((vu16)(0x08))
//#define CNDTR1           ((vu16)(0x0C))
//#define CPAR1            ((vu16)(0x10))
//#define CMAR1            ((vu16)(0x14))
#define DMA_ISR     (*((vu32 *)(DMA1_BASE+0x00)))
#define DMA_IFCR    (*((vu32 *)(0x40020000+0x04)))
#define DMA1_CCR1   (*((vu32 *)(0x40020000+0x08)))
#define DMA1_CNDTR1 (*((vu32 *)(0x40020000+0x0C)))
#define DMA1_CPAR1  (*((vu32 *)(0x40020000+0x10)))
#define DMA1_CMAR1  (*((vu32 *)(0x40020000+0x14)))
#define DMA1_CCR2   (*((vu32 *)(0x40020000+0x1C)))
#define DMA1_CNDTR2 (*((vu32 *)(0x40020000+0x20)))
#define DMA1_CPAR2  (*((vu32 *)(0x40020000+0x24)))
#define DMA1_CMAR2  (*((vu32 *)(0x40020000+0x28)))
#define DMA1_CCR5   (*((vu32 *)(0x40020000+0x58)))

#define DMA2_CCR1   (*((vu32 *)(DMA2_BASE+0x08)))
#define DMA2_CNDTR1 (*((vu32 *)(0x40020400+0x0C)))
#define DMA2_CPAR1  (*((vu32 *)(0x40020400+0x10)))
#define DMA2_CMAR1  (*((vu32 *)(0x40020400+0x14)))
#define DMA2_CCR2   (*((vu32 *)(0x40020400+0x1C)))
#define DMA2_CNDTR2 (*((vu32 *)(0x40020400+0x20)))
#define DMA2_CPAR2  (*((vu32 *)(0x40020400+0x24)))
#define DMA2_CMAR2  (*((vu32 *)(0x40020400+0x28)))
#define DMA2_CCR4   (*((vu32 *)(0x40020400+0x44)))
#define DMA2_CNDTR4 (*((vu32 *)(0x40020400+0x48)))
#define DMA2_CPAR4  (*((vu32 *)(0x40020400+0x4C)))
#define DMA2_CMAR4  (*((vu32 *)(0x40020400+0x50)))
#define DMA2_CCR5   (*((vu32 *)(0x40020400+0x58)))
#define DMA2_CNDTR5 (*((vu32 *)(0x40020400+0x5C)))
#define DMA2_CPAR5  (*((vu32 *)(0x40020400+0x60)))
#define DMA2_CMAR5  (*((vu32 *)(0x40020400+0x64)))

#endif

/********************************* END OF FILE ********************************/