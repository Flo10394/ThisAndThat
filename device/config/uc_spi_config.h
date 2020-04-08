/*
 * uc_spi_config.h
 *
 *  Created on: 27.03.2020
 *      Author: Florian
 */

#include <fw_peripheralsconfig.h>

#define UC_SPI 					SPI4
#define UC_SPI_IRQ				SPI4_IRQn
#define	UC_SPI_IRQ_PRIO			8
#define UC_SPI_ISR				SPI4_IRQHandler

#define UC_SPI_CR1				SPI_CR1_MSTR | SPI_CR1_BR_0 | SPI_CR1_BR_1 | SPI_CR1_BR_2 | SPI_CR1_SSM | SPI_CR1_SSI | SPI_CR1_BIDIOE
#define UC_SPI_CR2				SPI_CR2_RXNEIE | SPI_CR2_SSOE
#define UC_SPI_EN				SET_BIT(UC_SPI->CR1, SPI_CR1_SPE)

#define UC_SPI_SCK_PORT		GPIOE
#define UC_SPI_SCK_PIN		2

#define	UC_SPI_MOSI_PORT	GPIOE
#define	UC_SPI_MOSI_PIN		6

#define UC_SPI_MISO_PORT	GPIOE
#define UC_SPI_MISO_PIN		5

#define UC_SPI_CS_PORT		GPIOE
#define UC_SPI_CS_PIN		3

#define UC_SPI_AF		5



// TX
//#define SPI_DMA_TX						MAX7219_DMA_TX
//#define SPI_DMA_STREAM_IRQ_PRIO_TX		15
//#define SPI_DMA_TX_CHANNEL				3
//#define SPI_DMA_TX_STREAM_IRQ			DMA2_Stream3_IRQn
//#define SPI_DMA_TX_ISR				DMA2_Stream3_IRQHandler
//#define USART_DMA_TX_TCIF_REG			USART_DMA->HISR
//#define USART_DMA_TX_TCIF_BITMASK		(1 << 21)
//#define USART_DMA_TX_CTCIF_REG			USART_DMA->HIFCR
//#define USART_DMA_TX_CTCIF_BITMASK		(1 << 21)

// RX
//#define SPI_DMA_RX						MAX7219_DMA_RX
//#define SPI_DMA_STREAM_IRQ_PRIO_RX		15
//#define SPI_DMA_RX_CHANNEL				3
//#define SPI_DMA_RX_STREAM_IRQ			DMA2_Stream2_IRQn
//#define SPI_DMA_RX_ISR					DMA2_Stream2_IRQHandler
//#define USART_DMA_TX_TCIF_REG			USART_DMA->HISR
//#define USART_DMA_TX_TCIF_BITMASK		(1 << 21)
//#define USART_DMA_TX_CTCIF_REG			USART_DMA->HIFCR
//#define USART_DMA_TX_CTCIF_BITMASK		(1 << 21)
