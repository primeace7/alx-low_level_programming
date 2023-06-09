#include "hash_tables.h"

/**
 * hash_table_create - create a hashtable structure
 *@size: the size of the table to create, or the number
 *of records in the table to create
 *Return: pointer to the newly created hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t *nodes, *node;
	unsigned long int count;

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	node = malloc(sizeof(hash_node_t));
	nodes = malloc(sizeof(hash_node_t) * size);

	if (nodes == NULL || node == NULL)
		return (NULL);

	node = nodes;
	new_table->array = &node;
	new_table->size = size;

	for (count = 0; count < size; count++)
	{
		((new_table->array)[count])->key = NULL;
		((new_table->array)[count])->value = NULL;
		((new_table->array)[count])->next = NULL;
	}

	return (new_table);
}
