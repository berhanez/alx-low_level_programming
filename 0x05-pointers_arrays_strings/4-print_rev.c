#include "main.h"
/**
 * print_rev - prints reverse
 * Description: prints the string in reverse order
 * @s: string reference
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
