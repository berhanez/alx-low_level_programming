#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first part of string
 * @s2: second part of string
 * Return: pointer to new space of s1 + s2
 * return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, size, len_1 = 0, len_2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_1] != '\0')
		len_1++;
	while (s2[len_2] != '\0')
		len_2++;

	size = len_1 + len_2;

	str = malloc((sizeof(char) * size) + 1);

	if (str == NULL)
		return (NULL);

	while (i < len_1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i <= size)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
