include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of listint_t
 * @head: start
 * @index: index of the node that should be deleted(start @ 0)
 * Return: 1 for success || -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int n = 0;
	listint_t *temp, *current = *head;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (n < (index - 1))
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		n++;
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
