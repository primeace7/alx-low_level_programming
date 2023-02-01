#include "lists.h"

/**
 * delete_nodeint_at_index - delete an element of a linked list
 * at a given index
 * @head: pointer to the head pointer of the list
 * @index: the index of the list to delete
 * Return: 1 if the deletion succeeds, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *hold;
	unsigned int i;

	temp = *head;

	if (index == 0)
	{
		if (temp == NULL)
			return (-1);
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (-1);
		hold = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);
	hold->next = temp->next;
	free(temp);
	return (1);
}
