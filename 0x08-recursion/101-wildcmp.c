#include "main.h"

/**
 * wildcmp - Compare strings
 * @o1: pointer to string params
 * @u2: pointer to string params
 * Return: 0
 */

int wildcmp(char *o1, char *u2)
{
	if (*o1 == '\0')
	{
		if (*u2 != '\0' && *u2 == '*')
		{
			return (wildcmp(o1, u2 + 1));
		}
		return (*u2 == '\0');
	}

	if (*u2 == '*')
	{
		return (wildcmp(o1 + 1, u2) || wildcmp(o1, u2 + 1));
	}
	else if (*o1 == *u2)
	{
		return (wildcmp(o1 + 1, u2 + 1));
	}
	return (0);
}
