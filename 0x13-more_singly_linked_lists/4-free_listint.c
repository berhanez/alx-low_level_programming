#include "lists.h"
/**
 * free_listint - function frees listint_t list
 * @head: head/begining of list
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
