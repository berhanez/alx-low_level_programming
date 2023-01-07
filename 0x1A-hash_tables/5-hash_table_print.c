#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: Pointer to a hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cur;
	char separater = 0;
	unsigned long int i;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			cur = (ht->array)[i];
			while (cur != NULL)
			{
				if (separater == 1)
					printf(", ");
				printf("'%s': '%s'", cur->key, cur->value);
				cur = cur->next;
				separater = 1;
			}
		}
		printf("}\n");
	}
}
