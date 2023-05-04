#include "main.h"
/**
 * rot13 - Entry point
 * Description - ‘a function being encoded using rot13’
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int h, j;

	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (h = 0; s[h] != '\0'; h++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (s[h] == x[j])
			{
				s[h] = y[j];
				break;
			}
		}
	}

	return (s);
}

