#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: pointer to begining/head
 * @n: value of new element
 * Return: address of new element || NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;

	return (*head);
}
