#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - returns pointer to a 2D array of ints
 * @width: - width of array
 * @height: - array height
 * Return: pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j, x, y, **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		p = (int **) malloc(height * sizeof(int *));

		if (!p)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			p[i] = (int *) malloc(width * sizeof(int));
			if (!p[i])
			{
				for (j = 0; j <= i; j++)
					free(p[j]);
				free(p);
				return (NULL);
			}
		}
		for (x = 0; x < height; x++)
		{
			for (y = 0; y < width; y++)
				p[x][y] = 0;
		}
		return (p);
	}
}
