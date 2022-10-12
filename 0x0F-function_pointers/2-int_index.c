#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: contains elements to be searched
 * @size: number of elements of array
 * @cmp: pointer to compare function
 * Return: int(-1 for no match or size <= 0)
 * 	return index of 1st elt for which cmp dowsnt return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;			
		}
	}
	return (-1);
}
