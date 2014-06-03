#ifndef _BT_H_
#define _BT_H_
#include "stm32f10x.h"


#define BT_on      GPIO_SetBits(GPIOB, GPIO_Pin_2)
#define BT_off     GPIO_ResetBits(GPIOB, GPIO_Pin_2)//宏定义蓝牙开关

void BT_PowerInit(void);   //蓝牙透传电源初始化



#endif

