#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @aq: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **aq)
{
	int a, n, t = 0, l = 0;
	char *str;

	if (ac == 0 || aq == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (n = 0; aq[a][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (n = 0; aq[a][n]; n++)
	{
		str[t] = aq[a][n];
		t++;
	}
	if (str[t] == '\0')
	{
		str[t++] = '\n';
	}
	}
	return (str);
}
