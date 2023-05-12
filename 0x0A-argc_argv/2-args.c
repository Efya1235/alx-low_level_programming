#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int s;

	for (s = 0; s < argc; s++)
	{
		printf("%s\n", argv[s]);
	}

	return (0);
}
