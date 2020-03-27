/*
 * fw_peripheralsconfig.h
 *
 *  Created on: 08.02.2020
 *      Author: Florian
 */

#ifndef CONFIG_FW_PERIPHERALSCONFIG_H_
#define CONFIG_FW_PERIPHERALSCONFIG_H_

#define GREEN_LED_PORT 		GPIOG
#define GREEN_LED_PIN 		13

/******************************************************************
********************* DEBUG UART **********************************
******************************************************************/
#define DEBUG_USART						USART2

#define	DEBUG_UART_TX_PORT				GPIOD
#define	DEBUG_UART_TX_PIN				5
#define	DEBUG_UART_RX_PORT				GPIOD
#define	DEBUG_UART_RX_PIN				6

#define DEBUG_USART_DMA					DMA1
#define DEBUG_USART_DMA_TX				DMA1_Stream6
#define DEBUG_USART_DMA_RX				DMA1_Stream5

/******************************************************************
*******************************************************************
******************************************************************/



#endif /* CONFIG_FW_PERIPHERALSCONFIG_H_ */
