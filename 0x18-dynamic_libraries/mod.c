#include "main.h"

/**
 * mod - calculates the remainder of two integers
 * @a: integer 1
 * @b: integer 2
 * Description: takes two integers, and calculates the remainder
 * after division
 * Return: modulus
 */

int mod(int a, int b)
{
	int modulus;

	modulus = a % b;

	return (modulus);
}
