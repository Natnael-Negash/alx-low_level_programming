#include "main.h"

/**
* wildcmp - Compare strings
* @k1: pointer to string params
* @k2: pointer to string params
* Return: 0
*/

int wildcmp(char *k1, char *k2)
{
if (*k1 == '\0')
{
if (*k2 != '\0' && *k2 == '*')
{
return (wildcmp(k1, k2 + 1));
}
return (*k2 == '\0');
}
if (*k2 == '*')
{
return (wildcmp(k1 + 1, k2) || wildcmp(k1, k2 + 1));
}
else if (*k1 == *k2)
{
return (wildcmp(k1 + 1, k2 + 1));
}
return (0)`;
}

