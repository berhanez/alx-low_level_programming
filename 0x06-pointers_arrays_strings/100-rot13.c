#include "main.h"
/**
 * *rot13 - encodes a string with rot13
 * @s: string
 * Return: string s
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			{
				s[i] -= 13;
				break;
			}
			s[i] += 13;
			break;
		}
		i++;
	}
	return (s);
}
