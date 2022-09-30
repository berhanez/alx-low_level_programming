#include "main.h"
/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: what is to be searched for in s
 * Return: s if match else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
