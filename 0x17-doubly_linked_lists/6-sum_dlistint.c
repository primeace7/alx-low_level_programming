#include "lists.h"

/**
 * sum_dlistint - Find the sum of all data in a linked list
 * @head: Pointer to the head (first) node of the list
 * Return: the sum of all data in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int total;

	if (head == NULL)
		return (0);

	for (total = 0; head != NULL; head = head->next)
		total += head->n;

	return (total);
}
