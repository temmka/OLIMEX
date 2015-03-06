/*
 * app.cpp
 *
 *  Created on: 05 ����� 2015 �.
 *      Author: temmka
 */

#include <app.h>
#include <FreeRTOSTask.h>
#include "gpio.h"
app::app(char const* name, unsigned portBASE_TYPE priority, unsigned portSHORT stackDepth) :
		FreeRTOSTask(name, priority, stackDepth)
{
	// TODO Auto-generated constructor stub

}

void app::task()
{


	for (;;)
	{

			HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_6);
			vTaskDelay(250 / portTICK_RATE_MS);

	}
}

