#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @h: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char h)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		str[x] = h;
	return (str);
}

