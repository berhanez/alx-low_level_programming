#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2D grid from prev task
 * @grid: 2D array
 * @height: array height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
