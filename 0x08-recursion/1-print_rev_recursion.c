#include "main.h"
/**
* _print_rev_recursion - Prints a string in reverse.
* @q: The string to be printed.
*/
void _print_rev_recursion(char *q)
{
if (*q)
{
_print_rev_recursion(q + 1);
_putchar(*q);
}
}
