#include "main.h"

/**
 * print_chessboard - Entry point
 * @x: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*x)[8])
{
	int a;
	int b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
			_putchar(x[a][b]);
		_putchar('\n');
	}
}
