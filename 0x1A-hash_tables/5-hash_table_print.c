#include "hash_tables.h"

/**
 * hash_table_print - print a hashtable's content
 * @ht: the hashtable to print
 *Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count;
	hash_node_t *n, *h;

	n = NULL;

	if (ht != NULL)
	{
		printf("{");
		for (count = 0; count < (ht->size); count++)
		{
			h = ((ht->array)[count]);
			if (((ht->array)[count])->key != NULL)
			{
				if (count == 0)
					printf("\'%s:\' \'%s\'", h->key, h->value);
				else
					printf(", \'%s:\' \'%s\'", h->key, h->value);
				n = ((ht->array)[count])->next;
				while (n != NULL)
				{
					printf(", \'%s:\' \'%s\'", n->key, n->value);
					n = n->next;
				}
			}
		}
		printf("}\n");
	}
}
