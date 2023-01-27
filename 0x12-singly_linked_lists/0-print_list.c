#include "lists.h"

/**
 * print_list - print all the elements of a linked list
 * @h: pointer to the list to print
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);

	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}
