#include "stm32f4xx.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_rcc.h"
#include "misc.h"


void LED_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;
    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);
    
	//结构体成员设置
	GPIO_InitStruct.GPIO_Pin   =GPIO_Pin_6 |GPIO_Pin_7 ;
	GPIO_InitStruct.GPIO_Mode  =GPIO_Mode_OUT ;
	GPIO_InitStruct.GPIO_OType =GPIO_OType_PP ;
	GPIO_InitStruct.GPIO_PuPd  =GPIO_PuPd_UP ;
	GPIO_InitStruct.GPIO_Speed =GPIO_Speed_50MHz ;
	//初始化GPIO口
	GPIO_Init(GPIOA ,&GPIO_InitStruct);
	//设置GPIO口上拉
	GPIO_SetBits(GPIOA ,GPIO_Pin_6 |GPIO_Pin_7 );
}

