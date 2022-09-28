#include "main.h"
/**
 * _pow_recursion - return x**y
 * @x: base number
 * @y: exponent
 * Return: -1 for y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
