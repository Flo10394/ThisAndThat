/*
 * uc_usart_config.h
 *
 *  Created on: 08.02.2020
 *      Author: Florian
 */
#include <fw_peripheralsconfig.h>


#ifndef CONFIG_UC_USART_CONFIG_H_
#define CONFIG_UC_USART_CONFIG_H_

//CLock
#define APB_CLOCK						HSI_VALUE

//USART
#define USART							DEBUG_USART
#define USART_IRQ						USART2_IRQn
#define USART_IRQ_PRIO					8
#define USART_ISR						USART2_IRQHandler
#define USART_BAUDRATE					115200

// USART TX RX
#define	UART_TX_PORT					DEBUG_UART_TX_PORT
#define	UART_TX_PIN						DEBUG_UART_TX_PIN
#define	UART_RX_PORT					DEBUG_UART_RX_PORT
#define	UART_RX_PIN						DEBUG_UART_RX_PIN
#define	UART_AF							7


// DMA
#define USART_DMA						DEBUG_USART_DMA
// TX
#define USART_DMA_TX					DEBUG_USART_DMA_TX
#define USART_DMA_STREAM_IRQ_PRIO_TX	15
#define USART_DMA_TX_CHANNEL			4
#define USART_DMA_TX_STREAM_IRQ			DMA1_Stream6_IRQn
#define USART_DMA_TX_ISR				DMA1_Stream6_IRQHandler
#define USART_DMA_TX_TCIF_REG			USART_DMA->HISR
#define USART_DMA_TX_TCIF_BITMASK		(1 << 21)
#define USART_DMA_TX_CTCIF_REG			USART_DMA->HIFCR
#define USART_DMA_TX_CTCIF_BITMASK		(1 << 21)

// RX

#define USART_DMA_RX					DEBUG_USART_DMA_RX
#define USART_DMA_STREAM_IRQ_PRIO_RX	15
#define USART_DMA_RX_CHANNEL			4
#define USART_DMA_RX_CHANNEL_IRQ		DMA1_Stream5_IRQn
#define USART_DMA_RX_ISR				DMA1_Stream5_IRQHandler
#define USART_DMA_RX_TCIF_REG			USART_DMA->HISR
#define USART_DMA_RX_TCIF_BITMASK		(1 << 11)
#define USART_DMA_RX_CTCIF_REG			USART_DMA->HIFCR
#define USART_DMA_RX_CTCIF_BITMASK		(1 << 11)



#endif /* CONFIG_UC_USART_CONFIG_H_ */
