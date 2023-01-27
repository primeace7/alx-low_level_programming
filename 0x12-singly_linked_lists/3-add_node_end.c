#include "lists.h"

/**
 * add_node_end - add a new node to the end of a linked list
 * @head: pointer to the first node (node 1)
 * @str: pointer to the str element of the new node to create
 * Return: pointer to the newly created node, or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp, *p;

	p = *head;
	temp = *head;
	while (p != NULL)
	{
		temp = p;
		p = p->next;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = p;
	new->str = strdup(str);
	new->len = strlen(str);
	temp->next = new;
	return (new);
}
