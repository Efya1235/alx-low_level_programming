#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: the pointer to dest
 */

char *leet(char *s)
{
	int count = 0, a;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (*(s + count) == low_letters[a] || *(s + count) == upp_letters[a])
			{
				*(s + count) = numbers[a];
				break;
			}
		}
	count++;
	}

	return (s);
}
