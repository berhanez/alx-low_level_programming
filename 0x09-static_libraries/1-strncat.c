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

	while (dest[d_len])
		d_len++;
	while (src[i] && i < n)
	{
		dest[d_len] = src[i];
		d_len++;
		i++;
	}
	dest[d_len + n + 1] = '\0';
	return (dest);
}
