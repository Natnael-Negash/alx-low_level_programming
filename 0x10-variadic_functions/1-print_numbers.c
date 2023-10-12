#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/*
 *  print_numbers :prints numbers, followed by a new line.
 *  @separator :the string to be printed between numbers
 *  @n :the number of integers passed to the function
 *  @...: a variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int s;
	va_start(num, n);

	for (s = 0; s < n; s++)
	{
		printf("%d", va_arg(num,int));
	if (s != (n-1)&& separator != NULL)
		printf("%s",separator);
	}
printf("\n");
va_end(num);
}
