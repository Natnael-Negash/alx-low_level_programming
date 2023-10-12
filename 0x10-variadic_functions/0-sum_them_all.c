#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/*
 * sum of all parameters
 *
 * return sum;
 */
int sum_them_all(const unsigned int n, ...)
{

	 va_list ptr;
	int sum;
unsigned int a;
	va_start(ptr, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
