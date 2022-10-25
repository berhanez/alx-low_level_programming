#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: start of list
 * @idx: index of list where node should be added(start @ 0)
 * @n: value
 * Return: address of new node || NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	while (i < (idx - 1))
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
