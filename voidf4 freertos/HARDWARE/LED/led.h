#ifndef __LED_H
#define __LED_H
#include "sys.h"



//LED端口定义
#define LED0 PBout(9)	// DS0
#define LED1 PBout(8)	// DS1	 

void LED_Init(void);//初始化		 				    
#endif
