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
	unsigned long int i;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while(curr)
		{
			printf("'%s': '%s'", curr->key, curr->value);
			if (i != ht->size - 1)
				printf(", ");
			curr = curr->next;
		}
	}
	printf("}\n");
}
