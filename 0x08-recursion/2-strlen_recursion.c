#include "main.h"
/**
 * _strlen_recursion - return length of string with recursion
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	while (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);

}
