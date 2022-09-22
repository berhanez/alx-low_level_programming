#include "main.h"
/**
 * *_strncat - concatenates strin
 * @dest: string to be appended
 * @src: string to be added to dest
 * @n: n bytes at most used from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d_len = 0;

	while (dest[i++])
		d_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[d_len++] = src[i++];
	return (dest);
}
