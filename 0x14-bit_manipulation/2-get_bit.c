#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @number: unsigned long int input.
 * @bit_index: index of the bit.
 *
 * Return: value of the bit.
 */

int get_bit(unsigned long int number, unsigned int bit_index)
{
	unsigned int i;

	if (number == 0 && bit_index < 64)
		return (0);

	for (i = 0; i <= 63; number >>= 1, i++)
	{
		if (bit_index == i)
		{
			return (number & 1);
		}
	}

	return (-1);
}
