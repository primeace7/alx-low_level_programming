#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a linked list
 * @head: pointer to the head node pointer of the list
 * @index: the index of the linked list to get
 * Return: pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int n;

	if (index == 0)
		return (head);
	if (head == NULL)
		return (NULL);
	for (n = 0; n < index; n++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
