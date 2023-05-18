#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @a1: string to append to
 * @a2: string to concatenate from
 * @n: number of bytes from a2 to concatenate to a1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *a1, char *a2, unsigned int n)
{
	char *w;
	unsigned int i = 0, p = 0, len1 = 0, len2 = 0;

	while (a1 && a1[len1])
		len1++;
	while (a2 && a2[len2])
		len2++;

	if (n < len2)
		w = malloc(sizeof(char) * (len1 + n + 1));
	else
		w = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!w)
		return (NULL);

	while (i < len1)
	{
		w[i] = a1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		w[i++] = a2[p++];
	while (n >= len2 && i < (len1 + len2))
		w[i++] = a2[p++];

	w[i] = '\0';

	return (w);
}
