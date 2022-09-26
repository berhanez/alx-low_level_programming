#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: string(initial)
 * @accept: substring of c(contained in s)
 * Return: bytes in @s that are also in @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
