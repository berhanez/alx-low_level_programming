#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: destination to add string 'src'
 * @src: string to append to dest
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int d_len = 0;

	i = 0;
	while (dest[i++])
	{
		d_len++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[d_len] = src[i];
		d_len++;
	}
	dest[d_len] = '\0';
	return (dest);
}
