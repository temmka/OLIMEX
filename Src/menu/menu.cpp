/*
 * menu.cpp
 *
 *  Created on: Mar 4, 2015
 *      Author: temmka
 */

#include <menu/menu.h>

menu::menu()
{
	// TODO Auto-generated constructor stub

}

void menu::toggle(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin){
	HAL_GPIO_TogglePin(GPIOx, GPIO_Pin);
}


