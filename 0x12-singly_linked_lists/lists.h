#ifndef _LISTS_H
#define _LISTS_H
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length of string
 * @next: pointer to the next node
 */
typedef struct list_s
{
	char *str;
	struct list_s *next;
	unsigned int len;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* _LISTS_H */
