#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *array_range - creates array of integers
 * @min: min values of array
 * @max: max values
 * Return: pointer to new array
 * return NULL, if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int diff = 0, i, *p;

	if (min > max)
		return (NULL);

	diff = (max + 1 - min);

	p = malloc(sizeof(int) * diff);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < diff; i++)
		p[i] = min + i;

	return (p);
}
