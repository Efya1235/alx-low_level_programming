#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @pointer: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *pointer, unsigned int old_size, unsigned int new_size)
{
	char *pointer1;
	char *old_pointer;
	unsigned int i;

	if (new_size == old_size)
		return (pointer);

	if (new_size == 0 && pointer)
	{
		free(pointer);
		return (NULL);
	}

	if (!pointer)
		return (malloc(new_size));

	pointer1 = malloc(new_size);
	if (!pointer1)
		return (NULL);

	old_pointer = pointer;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			pointer1[i] = old_pointer[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			pointer1[i] = old_pointer[i];
	}

	free(pointer);
	return (pointer1);
}
