#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d_val = 0;
	int a = 0;

	if (b == NULL)
		return (0);
	while (b[a] == '0' || b[a] == '1')
	{
		d_val <<= 1;
		d_val += b[a] - '0';
		a++;
	}
	return (d_val);
}

