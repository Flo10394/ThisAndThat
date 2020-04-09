/***********************************************************
	file: 				fw_spiTask.c
	
	file description: 	TODO: add your file description

	author:				Florian
	created on:			04.04.2020
***********************************************************/


/***********************************************************
						includes
***********************************************************/
#include <stdio.h>
#include <stdint.h>
#include <fw_tasks.h>
#include <drv_max7219_8x8.h>

/***********************************************************
					configuration options
***********************************************************/



/***********************************************************
					private definitions
***********************************************************/



/***********************************************************
					   private types
***********************************************************/



/***********************************************************
					private variables
***********************************************************/



/***********************************************************
				private function declarations
***********************************************************/



/***********************************************************
				public function definitions
***********************************************************/
extern void SpiTask(void)
{
	DRV_MAX7219_8x8_init();

	static ledMatrix leds;
//	memset(leds, 0, 64);
	leds[0][0] = 1;
	leds[1][1] = 1;
	leds[2][2] = 1;

	DRV_MAX7219_8x8_clear();

	DRV_MAX7219_8x8_setLED(&leds);

}


/***********************************************************
				private function definitions
***********************************************************/
