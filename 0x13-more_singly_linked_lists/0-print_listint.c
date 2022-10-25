#include "lists.h"
/**
 * print_listint - prints all elements of listint_t
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *hh = h; 
	size_t n = 0;

	while (hh)
	{
		n++;
		printf("%d\n", hh->n);
		hh = hh->next;
	}
	return (n);
}
