#include "main.h"
/**
 * print_diagsums - print sum of two diagonals of square
 * @a: square matrix
 * @size: width of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i];
		a = a + size;
	}
	a = a - size;
	for (i = 0; i < size; i++)
	{
		s2 = s2 + a[i];
		a = a - size;
	}
	printf("%d, %d\n", s1, s2);
}
