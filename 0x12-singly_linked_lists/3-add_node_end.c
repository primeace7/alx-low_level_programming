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
	char *new_str;

	new_str = (char *)str;
	hold = *head;
	while (hold != NULL)
	{
		temp = hold;
		hold = temp->next;
	}

	hold = malloc(sizeof(list_t));
	if (hold == NULL)
		return (NULL);
	hold->next = NULL;
	if (*head != NULL)
		temp->next = hold;
	else
		*head = hold;
	hold->str = strdup(new_str);
	hold->len = strlen(new_str);

	return (hold);
}
