#include "hash_tables.h"

/**
 * hash_table_print - prints the contents of a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned int i;
	bool delim = false;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			if (delim)
				printf(", ");
			printf("'%s': '%s'", curr->key, curr->value);
			delim = true;
			curr = curr->next;
		}
	}
	printf("}\n");
}
