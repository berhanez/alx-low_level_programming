#include "lists.h"
/**
 * list_len - returns # of elements in a list
 * @h: singly linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	/* n - number of nodes */
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
