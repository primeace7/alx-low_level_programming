#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a linked list
 * @head: a pointer to the head pointer of the list
 * @n: the data of the node to add
 * Return: pointer to the new node, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->next = *h;
	temp->n = n;
	*h = temp;
	return (temp);
}
