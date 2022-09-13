#include "main.h"
/**
 * print_sign - Entry
 * Description: prints sign of a number
 * Return: 1 for positive, 0 for 0, -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if  (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	_putchar('0');
	return (0);
}
