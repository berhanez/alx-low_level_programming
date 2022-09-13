#include "main.h"
/**
 * _islower - Entry Point
 * Description: checks if lower case and returns 1 if lowercase
 * @c: integer
 * Return: 1 - true, 0 - false
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
