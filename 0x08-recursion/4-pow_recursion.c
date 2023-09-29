#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power of y
* @y: value to raise
* @z: power
*
* Return: result of the power
*/
int _pow_recursion(int y, int z)
{
if (z < 0)
return (-1);
if (z == 0)
return (1);
return (y * _pow_recursion(y, z - 1));
}

