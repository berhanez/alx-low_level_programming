#include "lists.h"
/**
 * print_listint - prints all elements of listint_t
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int n;
	
	n = 0;
	while (h != NULL)
	{
		if (h->n == '\0')
			return (n);
		else
			printf("%d \n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
