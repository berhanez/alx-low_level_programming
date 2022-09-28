#include "main.h"
/**
 * factorial - calculates n!
 * @n: integer
 * Return: -1 for n<0
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
}
