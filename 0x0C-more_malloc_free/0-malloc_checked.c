#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory with malloc
 * @b: byte size
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
