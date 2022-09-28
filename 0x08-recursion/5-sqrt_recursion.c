#include "main.h"
/**
 * _sqrt_recursion - Return square root
 * @n: integer
 * Return: If no natural sqrt -1,  else sqrt
 */
int _sqrt_recursion(int n)
{
	int y = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
	else
		return (_sqrt_subfunction(n, y));
}
/**
 * _sqrt_subfunction - find sqrt
 * @n: number
 * @y: temp value to approximate sqrt
 * Return: sqrt
 */
int _sqrt_subfunction(int n, int y)
{
	if (y * y == n)
		return (y);
	if (y == n / 2)
		return (-1);

	return (_sqrt_subfunction(n, y + 1));
}
