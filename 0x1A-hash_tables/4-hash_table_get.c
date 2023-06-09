#include "hash_tables.h"

/**
 * hash_table_get - retrieve the value of a key from hashtable
 * @ht: the hashtable to retrieve from
 * @key: the key whose value should be retrieved
 * Return: pointer to the value of @key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *result;

	index = key_index((unsigned char *)key, ht->size);

	result = ((ht->array)[index]->key);
	if (result == NULL)
		return (NULL);
	else
		return (result);
}
