#ifndef __PWM_H
#define __PWM_H


void TIM3_PWM_Init(u32 arr,u32 psc);
void TIM4_PWM_Init(u32 arr,u32 psc);

/*GUID*/
/*
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//设置系统中断优先级分组2
	TIM3_PWM_Init(500-1,84-1);//84M/84=1Mhz的计数频率,重装载值500，所以PWM频率为 1M/500=2Khz. 

	比较值从0-300递增,到300后从300-0递减
  **TIM_SetCompare1(TIM3,led0pwmval);//修改比较值，修改占空比**
*/


#endif
