#include "hash_tables.h"

/**
 * hash_table_delete - delete a hashtable and its content
 * @ht: the hashtable to delete
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int count;
	hash_node_t *node, *hold;

	node = NULL;

	if (ht != NULL)
	{
		for (count = 0; count < (ht->size); count++)
		{
			if (((ht->array)[count])->key != NULL)
			{
				node = ((ht->array)[count])->next;
				while (node != NULL)
				{
					hold = node->next;
					free(node);
					node = hold;
				}
				free(((ht->array)[count])->key);
				free(((ht->array)[count])->value);
				free(((ht->array)[count]));
			}
		}
		free(ht);
	}
}
