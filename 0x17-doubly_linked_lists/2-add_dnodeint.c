#include "lists.h"

/**
 * add_dnodeint - Add a new node to the beginning of a doubly-linked list
 * @head: Pointer to the head pointer of the list
 * @n: The data to insert at the new node
 * Return: The address of the newly-added node, or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *list, *new;

	list = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (list == NULL)
	{
		return (NULL);
	}

	new->prev = list->prev;
	new->next = list;
	new->n = n;
	list->prev = new;

	return (new);
}
