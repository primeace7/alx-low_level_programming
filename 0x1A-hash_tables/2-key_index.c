#include "hash_tables.h"

/**
 * key_index - use the hasing function to generate a table index
 * @key: the key of the entry to add to table, which will also be hashed
 * @size: the size of the table to add to
 * Return: the index of the table generated from hashing
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
