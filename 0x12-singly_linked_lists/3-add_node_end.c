#include "lists.h"

/**
 * add_node_end - add a new node to the end of a linked list
 * @head: pointer to the first node (node 1)
 * @str: pointer to the str element of the new node to create
 * Return: pointer to the newly created node, or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	if (temp != NULL)
	{
		for (; temp->next != NULL; temp = temp->next)
			;
	}
	new->next = NULL;
	temp->next = new;
	new->str = strdup(str);
	new->len = strlen(str);
	return (new);
}
