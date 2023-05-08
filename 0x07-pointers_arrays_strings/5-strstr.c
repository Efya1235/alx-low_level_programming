#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *e = haystack;
		char *f = needle;

		while (*e == *f && *f != '\0')
		{
			e++;
			f++;
		}

		if (*f == '\0')
			return (haystack);
	}
	return (0);
}
