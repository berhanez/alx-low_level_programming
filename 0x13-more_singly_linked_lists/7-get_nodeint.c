#include "lists.h"
/**
 * get_nodeint_at_index - return nth node
 * @head: start of list
 * @index: index of code starting at 0
 * Return: nth node || NULL if n doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;
	if (n < index)
		return (NULL);

	return (head);
}

