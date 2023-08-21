#include "main.h"
/**
 * _strlen - writes a function that returns the length of a string
 * @k: string
 * Return: length
 */
int _strlen(char *k)
{
	int longi = 0;

	while (*k != '\0')
	{
		longi++;
		k++;
	}

	return (longi);
}
