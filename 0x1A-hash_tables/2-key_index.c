#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: The key to generate an index for
 * @size: The size of the array of the hash table
 *
 * Return: The index of the given key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
