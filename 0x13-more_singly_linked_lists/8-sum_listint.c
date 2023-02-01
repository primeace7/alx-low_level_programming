#include "lists.h"

/**
 * sum_listint - find the sum of the elements of a linked list
 * @head: pointer to the head node of the list
 * Return: the sum of the list elements, or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	for(; head != NULL; head = head->next)
		sum += head->n;
	return (sum);
}
