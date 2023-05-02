#include "main.h"
/**
 * swap_int - writes a function that swaps the values of two integers
 * @x: swap integer
 * @y: swap integer
 */
void swap_int(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;
}
