#include "lists.h"

/**
 * add_node - Add a new node at the beggining of a linked list
 * @head: pointer to the head of the list
 * @str: the string element of the new node
 * Return: pointer to the newly created node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->next = *head;
	temp->str = strdup(str);
	temp->len = strlen(str);
	*head = temp;

	return (*head);
}
