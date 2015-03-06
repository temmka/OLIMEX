#ifndef FREERTOSTASK_H_
#define FREERTOSTASK_H_

#include <FreeRTOS.h>
#include <task.h>


// BaseTask ---------------------------------------------------------

class FreeRTOSBaseTask
{

public:
	xTaskHandle xth;
};

// TaskClass ---------------------------------------------------------

class FreeRTOSTask: public FreeRTOSBaseTask
{

public:
	FreeRTOSTask(char const* name, unsigned portBASE_TYPE priority, unsigned portSHORT stackDepth);

	virtual void task() = 0;
	static void tskfunc(void* parm);
};


#endif /* FREERTOSTASK_H_ */
