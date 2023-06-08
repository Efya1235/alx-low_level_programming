#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @q: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *q)
{
	unsigned int unit;
	int len, base_two;

	if (!q)
		return (0);
	unit = 0;
	for (len = 0; q[len] != '\0'; len++)
		;
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (q[len] != '0' && q[len] != '1')
		{
			return (0);
		}
		if (q[len] & 1)
		{
			unit += base_two;
		}
	}
	return (unit);
}
