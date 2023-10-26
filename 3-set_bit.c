#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to ! at a given index.
 * @n: decimal parameter
 * @index: index
 *
 * return: 1 if its worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n |= (1UL << index);

return (1);
}
