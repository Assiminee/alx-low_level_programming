#include "hash_tables.h"

/**
 * hash_table_print - prints the contents of the hash table
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int index;
	bool sep = false;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		curr = ht->array[index];
		while (curr)
		{
			if (sep)
				printf(", ");
			sep = true;
			printf("'%s': '%s'", curr->key, curr->value);
			curr = curr->next;
		}
	}
	printf("}\n");
}
