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
	MODIFY_REG(RCC->CFGR, RCC_CFGR_HPRE, 0);
	MODIFY_REG(RCC->CFGR, RCC_CFGR_PPRE1, 0); // APB1 Prescaler = 1
	enableGPIOClocks();

	//PC9 = MCO2
//	UC_GPIO_setOutputPushPullAlternateFunction(GPIOC, 9);
//	UC_GPIO_setAlternateFunction(GPIOC, 9, 0);
//	UC_GPIO_setSpeedHigh(GPIOC, 9);
//	MODIFY_REG(RCC->CFGR, (3 << 30), 0); // Select Systemclock as MCO2
//	MODIFY_REG(RCC->CFGR, (3 << 7), 0); // MCO2 div = 5


	RCC->APB1ENR |= (1 << 17); // Enable USART2 Clock
	RCC->AHB1ENR |= (1 << 21); // Enable DMA1 Clock

	OS_Init(); // Initialize embOS
	OS_InitHW(); // Initialize required hardware

	OS_TASK_CREATE(&BlinkTask_Task, "BlinkTask", BlinkTaskPrio, BlinkTask, BlinkTaskStack);

	OS_TASK_CREATE(&UsartTask_Task, "UsartTask", UsartTaskPrio, UsartTask, UsartTaskStack);

	OS_TASK_CREATE(&LedMultiplexTask_Task, "LedMultiplexTask", LedMultiplexTaskPrio, LedMultiplexTask, LedMultiplexTaskStack);

	OS_Start(); // Start embOS

	return 0;
}


static void enableGPIOClocks(void)
{
	MODIFY_REG(RCC->AHB1ENR, 0x3FF, 0x3FF); // Enable All GPIO Clocks (Bit 0-10);

	return;
}
