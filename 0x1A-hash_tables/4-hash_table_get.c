#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: The hash table
 * @key: the key
 *
 * Return: value associated with the given key, NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *curr;

	if (!ht || !key || !strlen(key))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	while (curr)
	{
		if (!strcmp(curr->key, key))
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
