#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int o, re;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	o = re = 0;
	while (s1[o] != '\0')
		o++;
	while (s2[re] != '\0')
		re++;
	conct = malloc(sizeof(char) * (o + re + 1));

	if (conct == NULL)
		return (NULL);
	o = re = 0;
	while (s1[o] != '\0')
	{
		conct[o] = s1[o];
		o++;
	}

	while (s2[re] != '\0')
	{
		conct[o] = s2[re];
		o++, re++;
	}
	conct[o] = '\0';
	return (conct);
}
