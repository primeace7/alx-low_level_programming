#include "lists.h"

/**
 * dlistint_len - Return the number of elements in a doubly-linked list
 * @h: pointer to the head node of the list
 * Return: the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (0);
	for (; h != NULL; h = h->next, counter++)
		;
	return (counter);
}
