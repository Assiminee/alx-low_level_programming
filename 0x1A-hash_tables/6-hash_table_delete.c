#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *tmp;
	hash_table_t *ht_pt;

	if (!ht)
		return;

	ht_pt = ht;

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			tmp = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = tmp;
		}
	}
	free(ht_pt->array);
	free(ht_pt);
}
