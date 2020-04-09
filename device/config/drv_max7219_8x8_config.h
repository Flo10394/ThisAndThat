/*
 * uc_max7219cng_config.h
 *
 *  Created on: 27.03.2020
 *      Author: Florian
 */

#ifndef CONFIG_DRV_MAX7219_8X8_CONFIG_H_
#define CONFIG_DRV_MAX7219_8X8_CONFIG_H_

#include <uc_spi.h>

#define DRV_MAX7219_8x8_SPI_init()		UC_SPI_init()

#define DRV_MAX_7219_8x8_send16Bit(data)		UC_SPI_send16BitData(data)


#endif /* CONFIG_DRV_MAX7219_8X8_CONFIG_H_ */
