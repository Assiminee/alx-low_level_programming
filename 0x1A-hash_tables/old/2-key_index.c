#include "hash_tables.h"

/**
 * key_index - gets index of hashtable value
 * @key: key
 * @size: size of hash table
 *
 * Return: a semi random index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
