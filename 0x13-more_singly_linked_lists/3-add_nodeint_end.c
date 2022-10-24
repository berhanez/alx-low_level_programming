#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: pointer to begining/head
 * @n: value of new element
 * Return: address of new element || NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	else
		*head = new;
	return (new);
}
