#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *string);
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
	int j, k, num, len;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;

	s1s2 = malloc(sizeof(char) * len);

	if (s1s2 == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		s1s2[k] = s1[k];
	for (j = 0; j < num; j++)
		s1s2[k + j] = s2[j];
	s1s2[k + j] = '\0';

	return (s1s2);
}
/**
 * _strlen - find length of string
 * @string: str
 * Return: length of string
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
