#include "main.h"
/**
* reverse_array - reverse array of integers
* @a: array
* @n: number of elements of array
*
* Return: void
*/
void reverse_array(int *a, int n)
{
int q;
int t;
for (q = 0; q < n--; q++)
{
t = a[q];
a[q] = a[n];
a[n] = t;
}
}

