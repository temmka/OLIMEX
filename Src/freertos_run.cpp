/**
 ******************************************************************************
 * File Name          : freertos.c
 * Date               : 04/03/2015 01:03:05
 * Description        : Code for freertos applications
 ******************************************************************************
 *
 * COPYRIGHT(c) 2015 STMicroelectronics
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of STMicroelectronics nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/
#include "freertos_run.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Variables -----------------------------------------------------------------*/

/* USER CODE BEGIN Variables */

/* USER CODE END Variables */

/* Function prototypes -------------------------------------------------------*/

/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */
/* Hook prototypes */

xTaskHandle Task_1_Handle;
xTaskHandle Task_2_Handle;
xTaskHandle Task_3_Handle;
xTaskHandle Task_4_Handle;

char buff[3];
unsigned char temperature, ttemp;
void MX_FREERTOS_Init()
{
	/* USER CODE BEGIN Init */
	unsigned portBASE_TYPE uxPriority;
	/* USER CODE END Init */

	/* USER CODE BEGIN RTOS_MUTEX */
	/* add mutexes, ... */
	/* USER CODE END RTOS_MUTEX */

	/* USER CODE BEGIN RTOS_SEMAPHORES */
	/* add semaphores, ... */
	/* USER CODE END RTOS_SEMAPHORES */

	/* USER CODE BEGIN RTOS_TIMERS */
	/* start timers, add new ones, ... */
	/* USER CODE END RTOS_TIMERS */

	/* Create the thread(s) */
	/* definition and creation of defaultTask */
	//app obj;
//	app *tsk1;
//	tsk1 = new app("Task1", 1, 1000);
	nlcd_Init();
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_SET);

	//vTaskPrioritySet(tsk2, 1);
	//xTaskCreate( vTaskCode, "NAME", STACK_SIZE, &ucParameterToPass, tskIDLE_PRIORITY, &xHandle )
	xTaskCreate(Task_1, "Task1", configMINIMAL_STACK_SIZE, NULL, 2, &Task_1_Handle);
	xTaskCreate(Task_2, "Task2", configMINIMAL_STACK_SIZE, NULL, 1, &Task_2_Handle);
	xTaskCreate(Task_3, "Task3", configMINIMAL_STACK_SIZE, NULL, 1, &Task_3_Handle);
	xTaskCreate(Task_4, "Task4", configMINIMAL_STACK_SIZE, NULL, 1, &Task_4_Handle);

	/* Получить приоритет Задачи 1. Он равен 2 и не изменяется
	 на протяжении всего времени
	 работы учебной программы № 1 */
//	uxPriority = uxTaskPriorityGet( Task_1_Handle );
//
//	vTaskPrioritySet( Task_1_Handle, ( uxPriority + 1 ) );
	/* USER CODE BEGIN RTOS_THREADS */
	/* add threads, ... */
	/* USER CODE END RTOS_THREADS */

	/* USER CODE BEGIN RTOS_QUEUES */
	/* add queues, ... */
	/* USER CODE END RTOS_QUEUES */

	vTaskStartScheduler();
}

/* USER CODE BEGIN Application */

void Task_1(void * argument)
{

	/* USER CODE BEGIN 5 */


	/* Infinite loop */
	for (;;)
	{
		temperature = I2C_ReadByte(0x96, 0x00);

		//sprintf(buff, "%d", temperature);
		//nlcd_Text(buff, 10, 110, WHITE, BLACK);

		nlcd_Text("����������� ", 10, 10, WHITE, BLACK);
		//vTaskSuspend(Task_1_Handle);

		vTaskSuspend(Task_1_Handle);
	}

	/* USER CODE END 5 */

}

void Task_2(void * argument)
{

	/* USER CODE BEGIN 5 */

	/* Infinite loop */
	for (;;)
	{

		if (HAL_GPIO_ReadPin(GPIOG, GPIO_PIN_8))
		{
			vTaskResume(Task_1_Handle);
		}

		if (HAL_GPIO_ReadPin(GPIOG, GPIO_PIN_7))
		{
			vTaskResume(Task_3_Handle);
		}

		vTaskDelay(10 / portTICK_RATE_MS);
	}

	/* USER CODE END 5 */

}

void Task_3(void * argument)
{

	/* USER CODE BEGIN 5 */

	/* Infinite loop */
	for (;;)
	{
		nlcd_Text("Temperatura ", 10, 10, WHITE, BLACK);
		vTaskSuspend(Task_3_Handle);
	}

	/* USER CODE END 5 */

}

void Task_4(void * argument)
{

	/* USER CODE BEGIN 5 */

	/* Infinite loop */
	for (;;)
	{
		HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_9);
		//vTaskDelay(250 / portTICK_RATE_MS);
	}

	/* USER CODE END 5 */

}
/* USER CODE END Application */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
