#include "lists.h"
void free_listp(listp_t **head);

/**
 * print_listint_safe - prints a linked list
 * @head: start
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *h, *new, *add;

	h = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = h;
		h = new;

		add = h;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&h);
				return (nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	free_listp(&h);
	return (nodes);
}

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
