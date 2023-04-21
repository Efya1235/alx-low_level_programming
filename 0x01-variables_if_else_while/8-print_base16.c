#include <stdio.h>

/**
 * main - Entry point
 * Description - 'hexadecimal'
 * Return: always 0 (sucess)
 */

int main(void)
{
	int h;
	int g;

	for (h = 48; h <= 57; h++)
	{
		putchar(h);
	}
	for (g = 97; g <= 102; g++)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}
