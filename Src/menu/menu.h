/*
 * menu.h
 *
 *  Created on: Mar 4, 2015
 *      Author: temmka
 */

#include "gpio.h"

#ifndef MENU_H_
#define MENU_H_

class menu
{
public:
	menu();
	void toggle(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);


};

#endif /* SRC_MENU_MENU_H_ */
