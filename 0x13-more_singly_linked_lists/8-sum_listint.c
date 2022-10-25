#include "lists.h"
/**
 * sum_listint - function returns sum of all data(n) of listint_t
 * @head: start
 * Return: sum || 0 if list empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return(0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
