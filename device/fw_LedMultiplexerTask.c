/*
 * fw_LedMultiplexerTask.c
 *
 *  Created on: 27.03.2020
 *      Author: Florian
 */

#include <RTOS.h>

extern void LedMultiplexTask(void)
{
	while(1)
	{
		OS_Delay(1000);
	}
}
