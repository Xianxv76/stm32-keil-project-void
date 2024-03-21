#include "led.h"

void LED_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;

    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE); // 使能GPIOF时钟

    // GPIOF9,F10初始化设置
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_3; // LED0和LED1对应IO口
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;          // 普通输出模式
    GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;         // 推挽输出
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;     // 100MHz
    GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;           // 上拉
    GPIO_Init(GPIOA, &GPIO_InitStructure);                 // 初始化GPIO
    GPIO_ResetBits(GPIOA, GPIO_Pin_0 | GPIO_Pin_3);
}
