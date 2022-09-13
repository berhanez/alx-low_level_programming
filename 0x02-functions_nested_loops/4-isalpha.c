#include "main.h"
/*
 * _isalpha - Entry Point
 * Description: checks if it is alpha
 * @c: integer
 * Return: 1 for true, 0 for false
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
