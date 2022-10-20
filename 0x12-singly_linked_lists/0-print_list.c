#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints list
 * @h: The list_t list of elements
 * Return: node counts in list
 */
size_t print_list(const list_t *h)
{
	size_t nd = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nd++;
		h = h->next;
	}
	return (nd);
}
