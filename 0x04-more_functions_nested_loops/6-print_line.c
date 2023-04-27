#include "main.h"

/**
 * print_line -straigt -line
 * @n:No of times
 * Return:Always 0 (success)
 */

void print_line(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
