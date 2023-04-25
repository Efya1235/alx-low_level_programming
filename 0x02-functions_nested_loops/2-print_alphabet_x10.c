#include "main.h"

/**
  * print_alphabet_x10 - Entry point
  * Description - 'prints alphabets in lowercase 10 times'
  * Return: void (sucess)
  */

void print_alphabet_x10(void)
{
	int j = 48;
	int h;

	while (j <= 57)
	{
		for  (h = 97; h <= 122; h++)
		{
		_putchar(h);
		}
		_putchar('\n');
		j++;
	}
}
