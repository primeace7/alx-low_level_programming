#include "lists.h"

/**
 * print_dlistint - print all the elements of a doubly-linked list
 * @h: pointer to the head node of the list
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	counter = 0;

	if (h == NULL)
		return (0);

	for (; h != NULL; h = h->next, counter++)
		printf("%d\n", h->n);
	return (counter);
}
