#include "main.h"
/**
 * *_strchr - locates a char in a string
 * @s: string
 * @c: char to locate in string
 * Return: s if c is found else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
