#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array of char and initializes
 * @size: size
 * @c: char to initialize
 * Return: NULL if size = 0, else return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	
	if (size == 0)
		return (NULL);
	else
	str = malloc(sizeof(char) * size);
	str[0] = c;
	return (str);
}
