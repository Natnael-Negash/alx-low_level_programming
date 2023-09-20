#include "main.h"
/**
 * print_rev - imprime en reversa
 * @d: string
 * return: 0
 */
void print_rev(char *d)
{
	int longi = 0;
	int o;

	while (*d != '\0')
	{
		longi++;
		d++;
	}
	d--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*d);
		d--;
	}

	_putchar('\n');
}

