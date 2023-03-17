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
	dlistint_t *list, *new, *hold;
	unsigned int count;

	list = *h;
	if (list == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		*h = new;
		new->n = n;
		if (list == NULL)
			new->next = NULL;
		else
		{
			new->next = list;
			list->prev = new; }
		new->prev = NULL;
		return (new);	}

	for (count = 0; count < idx; count++)
	{
		hold = list;
		list = list->next;
		if (list == NULL && count != idx - 1)
			return (NULL);	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	hold->next = new;
	new->prev = hold;
	if (list != NULL)
		list->prev = new;
	new->next = list;
	new->n = n;
	return (new); }
