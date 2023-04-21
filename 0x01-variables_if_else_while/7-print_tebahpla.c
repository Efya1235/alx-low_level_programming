#include <stdio.h>

/**
 * main - Entry point
 * Description - 'ascii table'
 * Return: always 0 (sucess)
 */

int main(void)
{
	int h = 122;

	while (h >= 97)
	{
		putchar(h);
		h--;
	}
	putchar('\n');
	return (0);
}
