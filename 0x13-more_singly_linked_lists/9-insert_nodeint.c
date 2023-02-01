#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at
 * the nth index of a linked list
 * @head: pointer to the head pointer of the linked list
 * @idx: the index where the new node should be inserted
 * @n: the data of the new node to add
 * Return: pointer to the newly inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new, *hold;

	temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		new->n = n;
		return (new);
	}

	for (i = 0; i < idx; i++)
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
