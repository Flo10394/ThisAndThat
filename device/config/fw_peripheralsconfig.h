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


#define DEBUG_USART								USART2
#define DEBUG_USART_IRQ							USART2_IRQn
#define DEBUG_USART_IRQ_PRIO					15
#define DEBUG_USART_ISR							USART2_IRQHandler

#define DEBUG_USART_DMA							DMA1
#define DEBUG_USART_DMA_CHANNEL_IRQ_PRIO		15
#define DEBUG_USART_DMA_CHANNEL_IRQ_TX			DMA1_Stream6_IRQn
#define DEBUG_USART_DMA_ISR_TX					DMA1_Stream6_IRQHandler
#define DEBUG_USART_DMA_CHANNEL_IRQ_RX			DMA1_Stream5_IRQn
#define DEBUG_USART_DMA_ISR_RX					DMA1_Stream5_IRQHandler




#endif /* CONFIG_FW_PERIPHERALSCONFIG_H_ */
