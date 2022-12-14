#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all arguments passed
 * @n: number of elements to sum
 * Return: 0 if n == NULL, else return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	int sum;

	va_start(a, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(a, int);
	}
	va_end(a);
	return (sum);
}
