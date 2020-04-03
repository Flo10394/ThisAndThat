/*
 * uc_spi_config.h
 *
 *  Created on: 27.03.2020
 *      Author: Florian
 */

#include <fw_peripheralsconfig.h>

#define SPI 				SPI1
#define SPI_IRQ				SPI1_IRQn
#define	SPI_IRQ_PRIO		8
#define SPI_ISR				SPI1_IRQHandler

#define SPI_BAUDRATE_DIV	7
#define SPI_CR1				(1 << 2) 		| SPI_BAUDRATE_DIV << 3 | (1 << 9)
							// Master-Node	// Set Baud				// Software Slave Management
#define SPI_CR2				( 1 << 0) 		| ( 1 << 1)				| ( 1 << 6) 	| (1 << 7)
							// RX DMA En	// TX DMA En			// RXNE IE		/ TXE IE



// TX
#define SPI_DMA_TX						MAX7219_DMA_TX
#define SPI_DMA_STREAM_IRQ_PRIO_TX		15
#define SPI_DMA_TX_CHANNEL				3
#define SPI_DMA_TX_STREAM_IRQ			DMA2_Stream3_IRQn
#define SPI_DMA_TX_ISR				DMA2_Stream3_IRQHandler
//#define USART_DMA_TX_TCIF_REG			USART_DMA->HISR
//#define USART_DMA_TX_TCIF_BITMASK		(1 << 21)
//#define USART_DMA_TX_CTCIF_REG			USART_DMA->HIFCR
//#define USART_DMA_TX_CTCIF_BITMASK		(1 << 21)

// RX
#define SPI_DMA_RX						MAX7219_DMA_RX
#define SPI_DMA_STREAM_IRQ_PRIO_RX		15
#define SPI_DMA_RX_CHANNEL				3
#define SPI_DMA_RX_STREAM_IRQ			DMA2_Stream2_IRQn
#define SPI_DMA_RX_ISR					DMA2_Stream2_IRQHandler
//#define USART_DMA_TX_TCIF_REG			USART_DMA->HISR
//#define USART_DMA_TX_TCIF_BITMASK		(1 << 21)
//#define USART_DMA_TX_CTCIF_REG			USART_DMA->HIFCR
//#define USART_DMA_TX_CTCIF_BITMASK		(1 << 21)
