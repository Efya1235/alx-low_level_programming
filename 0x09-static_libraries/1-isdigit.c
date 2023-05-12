#include "main.h"

/**
 * _isdigit - a digit checker
 * @c: The character to check
 * Return: 1 for digit chracter or 0 for anything else
 */

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
