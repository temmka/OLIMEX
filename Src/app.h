/*
 * app.h
 *
 *  Created on: 05 марта 2015 г.
 *      Author: temmka
 */

#include <FreeRTOSTask.h>

#ifndef APP_H_
#define APP_H_

class app : public FreeRTOSTask
{
public:
	app(char const* name, unsigned portBASE_TYPE priority, unsigned portSHORT stackDepth);
	void task();
};

#endif /* APP_H_ */
