#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count number of words in string
 * @a: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *a)
{
	int flag, c, r;

	flag = 0;
	r = 0;

	for (c = 0; a[c] != '\0'; c++)
	{
		if (a[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			r++;
		}
	}

	return (r);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int g, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (g = 0; g <= len; g++)
	{
		if (str[g] == ' ' || str[g] == '\0')
		{
			if (c)
			{
				end = g;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = g;
	}

	matrix[k] = NULL;

	return (matrix);
}
