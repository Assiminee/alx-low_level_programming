#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 * @ht: hash table to add to or update
 * @key: key to add
 * @value: value to associate with key
 *
 * Return: 1 if succeeds, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] && !strcmp(ht->array[index]->key, key))
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
