#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, s_len = 0;

	while (src[index++])
		s_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = s_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
