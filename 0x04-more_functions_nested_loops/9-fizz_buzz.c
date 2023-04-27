#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the number 1 - 100 w/
 * fizz for multiples of 3, buzz for multiples of 5,
 * FizzBuzz for multiples of both
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%i", a);
		if (a < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
