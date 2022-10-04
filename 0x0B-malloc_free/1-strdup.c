#include <main.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to newly allocated space
 * @str: copy of str parameter
 * Return: NULL if str = NULL, success return pointer
 */
char *_strdup(char *str)
{
	char *st;
	unsigned int j, i;

	if (str == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}

	st = malloc(sizeof(char) * (j + 1));

	if (st == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		st[i] = str[i];
	st[j] = '\0';
	return (st);
}
