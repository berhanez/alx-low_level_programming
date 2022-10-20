#include "lists.h"

/**
 * print_list - Prints list
 * @h: The list_t list of elements
 * Return: node counts in list
 */
size_t print_list(const list_t *h)
{
	size_t nd;

	nd = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nd++;
	}
	return (nd);
}
