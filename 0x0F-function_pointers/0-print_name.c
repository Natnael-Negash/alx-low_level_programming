#include "function_pointer.h"
#include <stdio.h>
/**
 * print_name - prints a string using a function pointer
 * @name: pointer to a character array representing the name to be printed
 * @f: pointer to a function that takes a pointer to a character array as an argument and returns nothing
 *
 * This function takes a pointer to a character array and a function pointer as arguments.
 * If either argument is NULL, the function returns without doing anything.
 * If both arguments are not NULL, the function calls the function pointed to by the function pointer,
 * passing the name argument as its argument.
 */
void print_name(char *name, void (*f)(char*))
	{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

