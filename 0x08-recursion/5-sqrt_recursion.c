#include "main.h"

int actual_sqrt_recursion(int h, int j);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @h: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int h)
{
	if (h < 0)
		return (-1);
	return (actual_sqrt_recursion(h, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @h: number to calculate the sqaure root of
 * @j: iterator
 *
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int h, int j)
{
	if (j * j > h)
		return (-1);
	if (j * j == h)
		return (j);
	return (actual_sqrt_recursion(h, j + 1));
}
