#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: head/start
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *z;

	a = NULL;
	z = NULL;

	while (*head != NULL)
	{
		a = (*head)->next;
		(*head)->next = z;
		z = *head;
		*head = a;
	}

	*head = z;
	return (*head);
}
