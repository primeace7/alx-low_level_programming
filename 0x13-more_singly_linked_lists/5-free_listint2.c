#include "lists.h"

/**
 * free_listint2 - free a linked list and set the head node to null
 * @head: pointer to the head node pointer
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, **hold;

	hold = head;
	head = NULL;

	for (temp = *hold; *hold != NULL; *hold = temp)
	{
		temp = (*hold)->next;
		free(*hold);
	}

	hold = NULL;
}
