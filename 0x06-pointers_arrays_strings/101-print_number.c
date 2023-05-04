#include "main.h"
/**
 * print_number - Entry point
 * Description - 'function printing an integer'
 * @n: input integer.
 * Return: void
 */
void print_number(int n)
{
	unsigned int h, d, count;

	if (n < 0)
	{
		_putchar(45);
		h = n * -1;
	}
	else
	{
		h = n;
	}
	d = h;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((h / count) % 10) + 48);
	}
}
