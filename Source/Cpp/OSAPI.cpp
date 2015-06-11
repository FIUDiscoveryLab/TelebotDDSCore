/*********************************************************************************************
(c) 2005-2013 Copyright, Real-Time Innovations, Inc.  All rights reserved.    	                             
RTI grants Licensee a license to use, modify, compile, and create derivative works 
of the Software.  Licensee has the right to distribute object form only for use with RTI 
products.  The Software is provided �as is�, with no warranty of any type, including 
any warranty for fitness for any purpose. RTI is under no obligation to maintain or 
support the Software.  RTI shall not be liable for any incidental or consequential 
damages arising out of the use or inability to use the software.
**********************************************************************************************/
#include "OSAPI.h"

OSThread::OSThread(
	ThreadFunction function, 
	void *functionParam)
{
	_function = function;
	_functionParam = functionParam;
}

void OSThread::Run()
{
    pthread_attr_t threadAttr;
    pthread_attr_init(&threadAttr);
    pthread_attr_setdetachstate(&threadAttr, PTHREAD_CREATE_JOINABLE);
    pthread_create( &_thread, &threadAttr, _function, (void *)_functionParam );
    pthread_attr_destroy(&threadAttr);
}

OSMutex::OSMutex()
{
	pthread_mutex_init(&_mutex, NULL);
}

OSMutex::~OSMutex()
{
	pthread_mutex_destroy(&_mutex);
}

void OSMutex::Lock()
{
	pthread_mutex_lock(&_mutex);
}

void OSMutex::Unlock()
{
	pthread_mutex_unlock(&_mutex);
}

