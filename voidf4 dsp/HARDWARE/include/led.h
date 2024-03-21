#ifndef __LED_H
#define __LED_H
#include "sys.h"

#define BLUE_LED0 PAout(0)  // blue
#define GREEN_LED1 PAout(3) // green

void LED_Init(void);
#endif
