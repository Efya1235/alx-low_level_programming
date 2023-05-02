#include "main.h"
#include <stdio.h>
/**
 * print_array - elements of integers
 * @c: array
 * @d: number of elements to print
 * Return: a and n inputs
 */
void print_array(int *c, int d)
{
	int e;

	for (e = 0; e < (d - 1); e++)
	{
		printf("%d, ", c[e]);
	}
		if(e == (d - 1))
		{
			printf(" % d ", c[d - 1]);
		}
			printf("\n");
}
