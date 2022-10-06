#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - reallocates with (malloc + free)
 * @ptr: pointer to previously allocated memory
 * @old_size: previous size of ptr
 * @new_size: new size of ptr
 * Return: ptr if no error
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pptr = malloc(new_size);
		if (pptr == NULL)
			return (NULL);
	}
	if (new_size > old_size && ptr != NULL)
	{
		if (pptr == NULL)
			return (pptr);
		for (i = 0; i < old_size; i++)
			pptr[i] = *((char *)ptr + 1);
		free(ptr);
	}
	return (pptr);
}
