#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2 dimensional array
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **cee;
	int w, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	cee = malloc(sizeof(int *) * height);

	if (cee == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		cee[w] = malloc(sizeof(int) * width);

		if (cee[w] == NULL)
		{
			for (; w >= 0; w--)
				free(cee[w]);

			free(cee);
			return (NULL);
		}
	}

	for (w = 0; w < height; w++)
	{
		for (k = 0; k < width; k++)
			cee[w][k] = 0;
	}

	return (cee);
}
