#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr, *tmp;
	unsigned long int index;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		curr = ht->array[index];
		while (curr)
		{
			tmp = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
