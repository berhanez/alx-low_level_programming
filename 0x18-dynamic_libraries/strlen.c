#include "main.h"
/**
 * _strlen - string length
 * Description: prints length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
