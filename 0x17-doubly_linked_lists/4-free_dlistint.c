#include "lists.h"

/**
 * free_dlistint - free a doubly-linked list
 * @head: pointer to the head (first node) of the list
 * Return: nothing (void)
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold;

	if (head == NULL)
		return;

	if (head->next == NULL)
	{
		free(head);
		return;
	}

	for (hold = head->next; hold != NULL; hold = hold->next)
	{
		free(head);
		head = hold;
	}

	free(head);
}
