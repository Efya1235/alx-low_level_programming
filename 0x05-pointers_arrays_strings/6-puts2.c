#include "main.h"
/**
 * puts2 -starts with first character
 * prints funtions
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int l = 0;
	char *m = str;
	int q;

	while (*m != '\0')
	{
		m++;
		longi++;
	}
	l = longi - 1;
	for (q = 0; q <= l ; q++)
	{
		if (q % 2 == 0)
	{
		_putchar(str[q]);
	}
	}
	_putchar('\n');
}
