/*
 * freertos.h
 *
 *  Created on: 05 марта 2015 г.
 *      Author: temmka
 */

#include "FreeRTOS.h"
#include "task.h"
#include "timers.h"
#include "queue.h"
#include "semphr.h"
#include "event_groups.h"
#include "app.h"
#include "gpio.h"
#include "Nokia6610.h"
#include "soft_i2c.h"
#include "stdio.h"

#ifndef FREERTOS_H_
#define FREERTOS_H_



void MX_FREERTOS_Init();
void Task_1(void  * argument);
void Task_2(void * argument);
void Task_3(void  * argument);
void Task_4(void  * argument);



#endif /* FREERTOS_H_ */
