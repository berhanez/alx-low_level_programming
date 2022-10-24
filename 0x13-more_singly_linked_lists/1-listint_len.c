#include "lists.h"
/**
 * listint_len - Returns number of elements in listint_t
 * @h: head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		if (h->n == '\0')
			return (n);
		else
			h = h->next;
		n++;
	}
	return (n);
}
