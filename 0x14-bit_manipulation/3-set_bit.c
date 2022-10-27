#include "main.h"
/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: pointer to bit
 * @index: index
 * Return: 1 for success, -1 for fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = (*n | (1 << index));

	return (1);
}
