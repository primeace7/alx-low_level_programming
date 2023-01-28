#include "lists.h"

/**
 * list_len - find the lenght(number of elements) of a linked list
 * @h: pointer to the list which lenght will be found
 * Return: the lentght of the linked list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; *head != NULL; count++)
		*head = *head->next;
	return (count);
}
