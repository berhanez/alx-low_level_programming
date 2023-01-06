#include "hash_tables.h"
/**
 * key_index - returns an index for hash table based on hash of the key
 * @key: const unsigned char pointer to a str
 * @size: Size of array of the hash table.
 * Return: index corresponding to the hash of the key in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key) % size));
}
