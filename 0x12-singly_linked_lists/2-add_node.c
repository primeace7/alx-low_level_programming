#include "lists.h"

/**
 * add_node - Add a new node at the beggining of a linked list
 * @head: pointer to the head of the list
 * @str: the string element of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = head;

	head = malloc(sizeof(list_t));

	head->len = strlen(str);
	head->str = strdup(str);
	

}
