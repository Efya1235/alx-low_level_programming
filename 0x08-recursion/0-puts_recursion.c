#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @d: input
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *d)
{
	if (*d)
	{
		_putchar(*d);
		_puts_recursion(d + 1);
	}

	else
		_putchar('\n');
}
