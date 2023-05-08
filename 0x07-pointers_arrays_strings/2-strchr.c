#include "main.h"

/**
 * _strchr - Entry point
 * @k: input
 * @j: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *k, char j)
{
	int i = 0;

	for (; k[i] >= '\0'; i++)
	{
		if (k[i] == j)
			return (&k[i]);
	}
	return (0);
}
