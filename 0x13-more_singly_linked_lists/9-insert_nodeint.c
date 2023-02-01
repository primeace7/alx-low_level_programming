#include "lists.h"

/**
 * insert_nodeint - insert a new node at the nth index of a linked list
 * @head: pointer to the head pointer of the linked list
 * @idx: the index where the new node should be inserted
 * @n: the data of the new node to add
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i;
	listint_t *temp, *new, *hold;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (n == 0)
	{
		new->next = *head;
		*head = new;
		new->n = n;
		return (new);
	}

	for (i = 0; i < n; i++)
	{
		hold = temp;
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	new->next = temp;
	new->n = n;
	hold->next = new;
	return (new);
}
