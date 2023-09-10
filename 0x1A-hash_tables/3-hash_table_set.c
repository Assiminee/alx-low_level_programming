#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table
 * @key: the key to be added
 * @value: the value to associate with the key
 *
 * Return: 1 if a new element is successfully added, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (!ht || !key || !strlen(key) || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] && !strcmp(ht->array[index]->key, key))
	{
		free(ht->array[index]->value);
		ht->array[index]->value = malloc(strlen(value) + 1);
		strcpy(ht->array[index]->value, value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = malloc(strlen(key) + 1);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	strcpy(new_node->key, key);
	new_node->value = malloc(strlen(value) + 1);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	strcpy(new_node->value, value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
