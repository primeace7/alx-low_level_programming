#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: pointer to the head node of the list to free
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	for (temp = head; head != NULL; head = temp)
	{
		temp = head->next;
		free(head);
	}
}
