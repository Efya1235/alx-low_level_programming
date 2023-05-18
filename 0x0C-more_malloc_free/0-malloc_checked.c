#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @u: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int u)
{
	void *pointer;

	pointer = malloc(u);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
