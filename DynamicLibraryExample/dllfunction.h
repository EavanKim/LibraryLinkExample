#pragma once

#include <iostream>

#ifndef DYNAMICLIBRARYEXAMPLE_EXPORTS
#define EXPORT_DLLFUNCTION _declspec(dllimport) 
#else
#define EXPORT_DLLFUNCTION _declspec(dllexport)
#endif

extern "C"
{
	EXPORT_DLLFUNCTION void __stdcall PrintFunction();
}