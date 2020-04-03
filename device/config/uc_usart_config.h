/*
 * uc_usart_config.h
 *
 *  Created on: 08.02.2020
 *      Author: Florian
 */
#include <fw_peripheralsconfig.h>
#include <fw_tasks.h>


#ifndef CONFIG_UC_USART_CONFIG_H_
#define CONFIG_UC_USART_CONFIG_H_

//CLock
#define UC_USART_APB_CLOCK				HSI_VALUE

//USART
#define UC_USART						DEBUG_USART
#define UC_USART_IRQ					UART5_IRQn
#define UC_USART_IRQ_PRIO				15
#define UC_USART_ISR					UART5_IRQHandler
#define UC_USART_BAUDRATE				115200

// USART TX RX
#define	UC_USART_TX_PORT				DEBUG_UART_TX_PORT
#define	UC_USART_TX_PIN					DEBUG_UART_TX_PIN
#define	UC_USART_RX_PORT				DEBUG_UART_RX_PORT
#define	UC_USART_RX_PIN					DEBUG_UART_RX_PIN
#define	UC_USART_AF						8

#define	UC_USART_USE_PRINTF				1

#define UC_USART_MESSAGE_RECEIVED_CALLBACK()	USART_Message_received()

#endif /* CONFIG_UC_USART_CONFIG_H_ */
