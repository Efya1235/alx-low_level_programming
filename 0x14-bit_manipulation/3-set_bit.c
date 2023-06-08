#include "main.h"

/**
 * set_bit - modifies the value of a bit at a given index.
 * by setting it to 1.
 * @num_ptr: pointer to an unsigned long int.
 * @bit_index: index of the bit.
 *
 * Return: 1 if the modification was successful, -1 otherwise.
 */
int set_bit(unsigned long int *num_ptr, unsigned int bit_index)
{
	unsigned int mask;

	if (bit_index > 63)
		return (-1);

	mask = 1 << bit_index;
	*num_ptr = (*num_ptr | mask);

	return (1);
}
