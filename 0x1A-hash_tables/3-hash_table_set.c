#include "hash_tables.h"

/**
 * hash_table_set - add an element to a hashtable
 * @ht: the hashtable to add to
 * @key: the key of the new entry to add to table
 * @value: the value to add to table
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	new_node = NULL;

	if (key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	if (((ht->array)[index])->key == NULL)
	{
		((ht->array)[index])->key = strdup(key);
		((ht->array)[index])->value = strdup(value);
	}

	else
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		if (((ht->array)[index])->next == NULL)
		{
			((ht->array)[index])->next = new_node;
			new_node->key = strdup(key);
			new_node->value = strdup(value);
			new_node->next = NULL;

		}

		else
		{
			new_node->next = ((ht->array)[index])->next;
			new_node->key = strdup(key);
			new_node->value = strdup(value);
			((ht->array)[index])->next = new_node;
		}
	}

	return (1);
}
