#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates s1 and n bytes from s2
 * @s1: first part of string
 * @s2: second part of string
 * @n: # of bytes to concat from s2
 * Return: pointer to newly allocated space,
 * NULL, if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1s2;
	unsigned int i;

	for (i = 0; s1[i]; i++)
		n++;
	s1s2 = malloc(sizeof(char) * (n + 1));

	if(s1s2 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s1s2[n++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		s1s2[n++] = s2[i];
	s1s2[n] = '\0';
	return (s1s2);
}
