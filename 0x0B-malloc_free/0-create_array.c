#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initialize it with
 * a given character
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 * Return: a pointer to the created array, NULL if size is 0, or NULL if
 * the array creation failed
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	i = 0;

	while (i++ < size)
		s[i] = c;

	return (s);
}
