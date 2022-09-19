#include "main.h"
/**
 * swap_int - switches a and b
 * @a: value 1
 * @b: value 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
