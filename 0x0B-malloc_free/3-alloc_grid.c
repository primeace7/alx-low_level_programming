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
	int size, j, i;
	int *array;
	int **pt;

	pt = &array;

	if (width <= 0 || height <= 0)
		return (NULL);
	size = width * height;
	array = malloc(size * sizeof(*array));

	if (array == NULL)
	{
		free(array);
		free(pt);
		return (NULL);
	}

	for (j = 1; j <= height; j++)
	{
		for (i = 1; i <= width; i++)
			array[i * j] = 0;
	}

	return (pt);
}
