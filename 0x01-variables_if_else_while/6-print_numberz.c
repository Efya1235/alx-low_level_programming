#include <stdio.h>

/**
 * main - Entry point
 * Description - 'printing single digits'
 * Return: always 0 (sucess)
 */

int main(void)
{
	int h;

	for (h = 0; h <= 9; h++)
	{
		putchar(h + 48);
	}
	putchar('\n');
	return (0);
}
