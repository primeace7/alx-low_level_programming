#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create a 2d array initialized with zeros and return a
 * pointer to it
 * @width: the width of the array to create
 * @height: the height of the array to create
 * Return: a pointer to the initialized array
 */

int **alloc_grid(int width, int height)
{
	int size, j;
	int *array;
	int **pt = &array;

	if (width <= 0 || height <= 0)
		return (NULL);
	size = width * height;
	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < size; j++)
	{
		array[j] = 0;
	}

	return (pt);
}
