#include "lists.h"

/**
 * print_listint - Print all the elements of a listint,
 * a singly-linked list
 * @h: Pointer to the list to be printed
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
