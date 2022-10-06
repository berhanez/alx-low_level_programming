#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - function allocates memory using malloc
 * @b: byte size of memory
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b);
{
	int *m;

	m =(int*)malloc(b);

	if (m == NULL)
		return (98);
	else if (m != NULL)
		return (m);
	return (void);
}
