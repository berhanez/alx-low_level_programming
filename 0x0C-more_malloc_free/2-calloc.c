#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - allocates memory for array with malloc
 * @nmemb: elements in array
 * @size: byte size per element
 * Return: pointer to allocated memory
 * NULL if nmemb || size = 0 or malloc fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*((char *)(p) + i) = 0;

	return (p);
}
