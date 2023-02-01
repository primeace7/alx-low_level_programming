#include "lists.h"

/**
 * listint_len - find the number of elements in a linked list
 * @h: pointer the the head of the linked list
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next)
		count++;
	return (count);
}
