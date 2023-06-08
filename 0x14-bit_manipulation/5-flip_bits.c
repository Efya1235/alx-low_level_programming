#include "main.h"

/**
 * count_flipped_bits - counts the number of bits that need to be flipped
 * to convert one number to another.
 * @num1: first number.
 * @num2: second number.
 *
 * Return: number of bits to be flipped.
 */
unsigned int count_flipped_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned int flipped_bits_count;

	for (flipped_bits_count = 0; num1 || num2; num1 >>= 1, num2 >>= 1)
	{
		if ((num1 & 1) != (num2 & 1))
			flipped_bits_count++;
	}

	return (flipped_bits_count);
}
