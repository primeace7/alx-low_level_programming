#include "lists.h"

/**
 * get_dnodeint_at_index - Return the data at the nth node of a
 * doubly-linked list
 * @head: Pointer to the head (first node) of the list
 * @index: The (zero-based) index of the data to return from the list
 * Return: the data at node index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *list;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	list = head;

	for (count = 0; count < index; count++)
	{
		list = list->next;
		if (list == NULL)
			return (NULL);
	}

	return (list);
}
