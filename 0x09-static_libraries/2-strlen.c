#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @g: The string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *g)
{
	int longit = 0;

	if (*g)
	{
		longit++;
		longit += _strlen_recursion(g + 1);
	}

	return (longit);
}
