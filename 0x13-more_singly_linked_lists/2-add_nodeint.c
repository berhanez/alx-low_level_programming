#include "lists.h"
/**
 * add_nodeint - Adds a node at the begining of list
 * @head: begining of list
 * @n: int value to be added to list
 * Return: address of new element(head) || NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
	}
	else
		return(NULL);
	if (*head != NULL)
		new->next = *head;
	*head = new;
	return (new);
}
