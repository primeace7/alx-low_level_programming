#include "lists.h"

/**
 * add_dnodeint_end - Add a new node to the end of a linked list
 * @head: Pointer to the head pointer of the list
 * @n: The data to insert in the new node
 * Return: Pointer to the new node, or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *list;

	list = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (list == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}

	for (; list->next != NULL; list = list->next)
		;

	new->next = list->next;
	new->n = n;
	new->prev = list;
	list->next = new;

	return (new);
}
