#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a give index in a
 * doubly-linked list
 * @h: pointer to the head pointer of the list
 * @idx: the index where the new node should be inserted
 * @n: the data to insert at the new node
 * Return: the address of the new node, or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *list, *new;
	unsigned int count;

	list = *h;

	for (count = 0; count < idx; count++)
	{
		if (list == NULL)
			return (NULL);
		list = list->next;
	}

	if (list == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	list->prev->next = new;
	new->prev = list->prev;
	new->next = list;
	list->prev = new;
	new->n = n;

	return (new);
}
