#include "lists.h"
/**
 * pop_listint - delete the head node of listint_t
 * @head: start
 * Return: head node data(n) || 0 if list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int nn;

	if(*head == NULL)
		return (0);

	current = *head;

	nn = (*head)->n;
	*head = (*head)->next;

	free(current);

	return (nn);
}

