#include "lists.h"

/**
 * free_list - free the memory occupied by a list_t list
 * @head: pointer to the list to free
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t temp;

	if (head != NULL)
		temp = head->next;

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = temp;

		if (temp != NULL)
			temp = head->next;
	}

}
