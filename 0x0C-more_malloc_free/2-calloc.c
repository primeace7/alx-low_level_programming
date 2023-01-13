#inlcude "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocate memory for an array and initialize it using malloc
 * @nmemb: the number of array elements to allocate memory for
 * @size: the size of each array element in bytes
 * Return: pointer to the allocated memory initialized with zeros
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int space, i;
	void *spaces;

	space = size * nmemb;

	if (size == 0 || nmemb == 0)
		return (NULL);

	spaces = malloc(space);
	if (spaces == NULL)
		return (NULL);
	for (i = 0; i < space; i++)
		spaces[i] = 0;

	return (spaces);
}
