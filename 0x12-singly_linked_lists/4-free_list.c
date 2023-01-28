#include "lists.h"

/**
 * free_list - free the memory occupied by a list_t list
 * @head: pointer to the list to free
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
