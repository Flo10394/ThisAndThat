/*
 * fw_blinkTask.c
 *
 *  Created on: 08.02.2020
 *      Author: Florian
 */

#include "fw_tasks.h"
#include "uc_gpio.h"
#include "fw_peripheralsconfig.h"

/****** Task function ***********************************************/
extern void BlinkTask(void)
{
	// Green LED PG13
	UC_GPIO_setModeOutput(GREEN_LED_PORT, GREEN_LED_PIN);
	UC_GPIO_setOutputTypePushPull(GREEN_LED_PORT, GREEN_LED_PIN);
	UC_GPIO_setSpeedLow(GREEN_LED_PORT, GREEN_LED_PIN);

	while(1)
	{
		UC_GPIO_setPin(GREEN_LED_PORT, GREEN_LED_PIN);
		OS_Delay(1000);
		UC_GPIO_clearPin(GREEN_LED_PORT, GREEN_LED_PIN);
		OS_Delay(1000);
	}
}
