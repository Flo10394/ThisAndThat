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

#define TX_BUFFERSIZE	256
#define RX_BUFFERSIZE 	256

uint8_t tx_buffer[TX_BUFFERSIZE];
uint8_t rx_buffer[RX_BUFFERSIZE];

/****** Task function ***********************************************/
extern void UsartTask(void)
{
	UC_USART_Init(tx_buffer, TX_BUFFERSIZE, rx_buffer, RX_BUFFERSIZE);

	while(1)
	{
		OS_TASKEVENT_GetBlocked(USART_MESSAGE_RECEIVED);
		const char str[] = "I received a message, yeah\n";
		printf(str);
	}

}

extern void USART_Message_received(void)
{
	OS_TASKEVENT_Set(&UsartTask_Task, USART_MESSAGE_RECEIVED);
}
