#include "main.h"
#include <stdio.h>

/**
 * get_bet - returns the value of a bit at a given index
 * @n: parameter
 * @index: the index, starting from 0 of the bit you want to get.
 *
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ( n >> index) & 1;
}
