#include "hash_tables.h"

/**
 * hash_table_create - create a hashtable structure
 * @size: the size of the table to create, or the number
 *     of records in the table to create
 * Return: pointer to the newly created hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t *head_node;
	unsigned long int count;

	head_node = malloc(sizeof(hash_node_t) * size);
	table = malloc(sizeof(hash_table_t));

	if (head_node == NULL || table == NULL)
		return (NULL);

	table->array = &head_node;
	table->size = size;

	for (count = 0; count < size; count++)
	{
		(*(table->array))[count].key = NULL;
		(*(table->array))[count].value = NULL;
		(*(table->array))[count].next = NULL;
	}

	return (table);
}
