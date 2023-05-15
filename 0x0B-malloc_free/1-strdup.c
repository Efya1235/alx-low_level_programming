#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a new string
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *uuu;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	uuu = malloc(sizeof(char) * (a + 1));

	if (uuu == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		uuu[b] = str[b];

	return (uuu);
}
