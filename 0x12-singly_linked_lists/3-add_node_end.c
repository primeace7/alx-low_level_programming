#include "lists.h"

/**
 * add_node_end - add a new node to the end of a linked list
 * @head: pointer to the first node (node 1)
 * @str: pointer to the str element of the new node to create
 * Return: pointer to the newly created node, or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *hold, *temp;

	hold = *head;
	while (hold != NULL)
	{
		temp = hold;
		hold = temp->next;
	}

	hold = malloc(sizeof(list_t));
	if (hold == NULL)
		return (NULL);
	hold->next = temp->next;
	temp->next = hold;
	hold->str = strdup(str);
	hold->len = strlen(str);

	return (hold);
}
