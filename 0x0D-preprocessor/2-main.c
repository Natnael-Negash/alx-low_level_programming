#include <stdio.h>
/* This program prints the name of the file it was compiled from
 *
 * Return: Always 0 (Success)
 */
int main ()
{
	printf ("%s\n",__FILE__);
	return 0;
}
