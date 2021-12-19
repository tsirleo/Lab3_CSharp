#include "pch.h"
#include "mkl.h"

extern "C"  _declspec(dllexport)
void Interpolate(int& ret)
{
	try
	{
		ret = 0;
	}
	catch (...)
	{
		ret = -1;
	}
}