#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: Pointer to the hash table.
 * @key: Pointer to a the key string.
 * Return: Value associated with the key, or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *cur;
	char *v_cp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *) key, ht->size);

	cur = (ht->array)[i];
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			v_cp = strdup(cur->value);
			break;
		}
		cur = cur->next;
	}
	return (v_cp);
}
