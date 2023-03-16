#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node from a doubly-linked
 * list, at a given index
 * @head: pointer to the head pointer of the list
 * @index: the index (zero-based) of the node to delete
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *list, *iter, *new;

	list = *head;

	if (list == NULL)
		return (-1);

	for (count = 0; count < index; count++)
	{
		iter = list;
		list = list->next;
	}

	if (list == NULL && count < index)
		return (-1);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (-1);

	iter->next = new;
	new->prev = iter;
	new->next = list->next;
	list->next->prev = new;
	free(list);

	return (1);
}
