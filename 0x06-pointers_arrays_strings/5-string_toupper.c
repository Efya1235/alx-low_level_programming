#include "main.h"

/**
  * *string_toupper - Entry point
  * Description - 'a function changing lowercased letters to uppercase'
  * @str: string to be changed
  * Return: pointer to str
  */

char *string_toupper(char *str)
{
	int h = 0;

	while (str[h] != '\0')
	{
		if (str[h] >= 97 && str[h] <= 122)
		{
			str[h] = str[h] - 32;
		}
		h++;
	}
	return (str);
}
