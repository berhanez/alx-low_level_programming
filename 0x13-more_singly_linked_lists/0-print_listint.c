#include "lists.h"
/**
 * print_listint - prints all elements of listint_t
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d", h->n);
		h = h->next;
	}
	return (n);
}
