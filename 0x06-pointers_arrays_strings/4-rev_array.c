#include "main.h"
/**
 * reverse_array - reverses array of int
 * @a: array of int
 * @n: number of elements in array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
