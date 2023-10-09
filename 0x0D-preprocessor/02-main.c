#include <stdio.h>
/* This program prints the name of the file it was compiled from*/
int main ()
{
	printf ("%s\n",__FILE__);
	return 0;
}
