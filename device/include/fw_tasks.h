/*
 * fw_tasks.h
 *
 *  Created on: 08.02.2020
 *      Author: Florian
 */

#ifndef FW_TASKS_H_
#define FW_TASKS_H_

#include <RTOS.h>

// BLINK TASK
OS_STACKPTR int 	BlinkTaskStack[128];
OS_TASK 			BlinkTask_Task;
#define 			BlinkTaskPrio 100
extern void BlinkTask(void);

// USART TASK
OS_STACKPTR int 	UsartTaskStack[128];
OS_TASK 			UsartTask_Task;
#define 			UsartTaskPrio 100
extern void UsartTask(void);



#endif /* FW_TASKS_H_ */
