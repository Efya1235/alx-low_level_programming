#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @mi: minimum range of values stored
 * @ma: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int mi, int ma)
{
	int *pointer;
	int c, size;

	if (mi > ma)
		return (NULL);

	size = ma - mi + 1;

	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
		return (NULL);

	for (c = 0; mi <= ma; c++)
		pointer[c] = mi++;

	return (pointer);
}
