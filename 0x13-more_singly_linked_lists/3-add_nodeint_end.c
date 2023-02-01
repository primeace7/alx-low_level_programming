#include "lists.h"

/**
 * add_nodeint_end - add a new element to the end of a linked list
 * @head: pointer to the head pointer of the list
 * @n: the data of the element to add
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	temp = *head;

	for (; temp != NULL; temp = temp->next)
		new = temp;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->next = NULL;
	temp->n = n;
	new->next = temp;
	return (temp);
}
