/*
 * fw_main.c
 *
 *  Created on: 08.02.2020
 *      Author: Florian
 */


#include <RTOS.h>
#include <stm32f4xx.h>
#include <uc_gpio.h>
#include <fw_tasks.h>



static void enableGPIOClocks(void);

int main(void) {

	SystemInit();
	MODIFY_REG(RCC->CFGR, 0x2, 0); // Select HSI Clock as Sysclock (16 MHz) = quick & dirty for embOS
	enableGPIOClocks();

	RCC->APB1ENR |= (1 << 17); // Enable USART2 Clock

	OS_Init(); // Initialize embOS
	OS_InitHW(); // Initialize required hardware

	OS_TASK_CREATE(&BlinkTask_Task, "BlinkTask", BlinkTaskPrio, BlinkTask, BlinkTaskStack);

	OS_TASK_CREATE(&UsartTask_Task, "UsartTask", UsartTaskPrio, UsartTask, UsartTaskStack);

	OS_Start(); // Start embOS

	return 0;
}


static void enableGPIOClocks(void)
{
	MODIFY_REG(RCC->AHB1ENR, 0x3FF, 0x3FF); // Enable All GPIO Clocks (Bit 0-10);

	return;
}
