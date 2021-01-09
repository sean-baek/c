#include <stdio.h>

int getPowerof2()
{
	static int num1 = 0;

	num1 *= 2;

	return num1;
}
