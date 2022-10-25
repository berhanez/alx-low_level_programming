#include "lists.h"
/**
 * pop_listint - delete the head node of listint_t
 * @head: start
 * Return: head node data(n) || 0 if list empty
 */
int pop_listint(listint_t **head)
{
	int nn;

	if(*head == NULL)
		return (0);

	nn = (*head)->n;
	*head = (*head)->next;

	return (nn);
}

