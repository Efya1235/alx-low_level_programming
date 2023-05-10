#include "main.h"

int actual_prime(int y, int z);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @y: number to evaluate
 *
 * Return: 1 if y is a prime number, 0 if not
 */

int is_prime_number(int y)
{
	if (y <= 1)
		return (0);
	return (actual_prime(y, y - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @y: number to evaluate
 * @z: iterator
 *
 * Return: 1 if y is prime, 0 if not
 */

int actual_prime(int y, int z)
{
	if (z == 1)
		return (1);
	if (y % z == 0 && z > 0)
		return (0);
	return (actual_prime(y, z - 1));
}
