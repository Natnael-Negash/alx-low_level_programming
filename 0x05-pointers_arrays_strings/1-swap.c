#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @e: integer to swap
 * @f: integer to swap
 */
void swap_int(int *e, int *f)
{
	int m;

	m = *e;
	*e = *f;
	*f = m;
}

