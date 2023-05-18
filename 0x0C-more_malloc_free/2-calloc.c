#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @j: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area j
 */

char *_memset(char *j, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		j[y] = b;
	}

	return (j);
}

/**
 * *_calloc - allocates memory for an array
 * @nmem: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmem, unsigned int size)
{
	char *pointer;

	if (nmem == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmem);
	if (pointer == NULL)
		return (NULL);

	_memset(pointer, 0, nmem * size);

	return (pointer);
}
