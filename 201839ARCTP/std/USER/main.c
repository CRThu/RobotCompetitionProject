#include "stm32f4xx.h"
#include "delay.h"
#include "led.h"

int main(void)
{
    //DELAY FUNCTION INIT
	delay_init(168);
    
	LED_Init();
	
	/* Infinite loop */
	while (1)
	{	
		delay_ms(20);
		GPIO_ResetBits(GPIOA,GPIO_Pin_6|GPIO_Pin_7);
		delay_ms(20);
		GPIO_SetBits(GPIOA,GPIO_Pin_6|GPIO_Pin_7);
	}
}

