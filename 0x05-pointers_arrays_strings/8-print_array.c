#include <stdio.h>

/**
  * print_array - Entry point
  * Description - 'function printing elements of an array'
  * @a: is the array
  * @n: number of elements in the array
  * Return: void
  */

void print_array(int *a, int n)
{
	int h = 0;

	for (h = 0; h < n; h++)
	{
		printf("%d", a[h]);

		if (h != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
