/*
 * fw_blinkTask.c
 *
 *  Created on: 08.02.2020
 *      Author: Florian
 */

#include "fw_tasks.h"
#include <uc_usart.h>

/****** Task function ***********************************************/
extern void UsartTask(void)
{
	UC_USART_Init();

	while(1)
	{
		OS_Delay(1000);
	}
}
