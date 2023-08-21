#include "main.h"
/**
 * _puts - writes a function that prints a string, followed by a new line
 * @str: string to print
 * Return: string and new line
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
