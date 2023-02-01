#include "lists.h"

/**
 * free_listint2 - free a linked list and set the head node to null
 * @head: pointer to the head node pointer
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	for (temp = *head; *head != NULL; *head = temp)
	{
		temp = (*head)->next;
		free(*head);
	}

}
