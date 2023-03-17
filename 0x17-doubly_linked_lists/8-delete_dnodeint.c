#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node from a doubly-linked
 * list, at a given index
 * @head: pointer to the head pointer of the list
 * @index: the index (zero-based) of the node to delete
 * Return: 1 if successful, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *list, *hold;

	list = *head;

	if (list == NULL)
		return (-1);
	if (index == 0)
	{
		if (list->next == NULL)
			*head = NULL;
		else
		{
			*head = list->next;
			list->next->prev = NULL;
		}
		free(list);
		return (1);
	}

	for (count = 0; count < index; count++)
	{
		hold = list;
		list = list->next;
		if (list == NULL)
			return (-1);
	}

	if (list->next != NULL)
		list->next->prev = hold;
	else
		hold->next = list->next;

	free(list);
	return (1);
}
