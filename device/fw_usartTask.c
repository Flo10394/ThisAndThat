/*
 * fw_blinkTask.c
 *
 *  Created on: 08.02.2020
 *      Author: Florian
 */

#include "fw_tasks.h"
#include <uc_usart.h>
#include "stm32f4xx.h"
#include <stm32f4xx_usart.h>
#include <stm32f4xx_gpio.h>
#include <stm32f4xx_dma.h>
#include <misc.h>
#include <stdio.h>


uint8_t SendUartDma(const char * str, uint32_t size);

/****** Task function ***********************************************/
extern void UsartTask(void)
{
	UC_USART_Init();

	while(1)
	{
		const char str[] = "Hello STM32F4";

		UC_USART_sendString(str, sizeof(str));
		OS_Delay(100);
	}

}
