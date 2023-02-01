#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * @head: pointer to the head node pointer
 * Return: the data of the deleted head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int hold;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	hold = (*head)->n;
	free(*head);
	*head = temp;
	return (hold);
}
