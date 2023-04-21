#include <stdio.h>

/**
 * main - Entry point
 * Description - 'printing alphabets in lowercase using ascii table'
 * Return: always 0 (sucess)
 */

int main(void)
{
	int j = 97;

	while (j <= 122)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
