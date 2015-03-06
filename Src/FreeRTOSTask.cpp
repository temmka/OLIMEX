#include <FreeRTOSTask.h>

// -------------------------------------------------------------------

FreeRTOSTask::FreeRTOSTask(char const* name, unsigned portBASE_TYPE priority, unsigned portSHORT stackDepth)
{
	xTaskCreate(&tskfunc, name, stackDepth, this, priority, &xth);
}


void FreeRTOSTask::tskfunc(void* param)
{
	static_cast<FreeRTOSTask *>(param)->task();
}

