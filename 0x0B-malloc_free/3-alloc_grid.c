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
	int i;
	int *array;
	int **pt;

	pt = &array;

	if (width <= 0 || height <= 0)
		return (NULL);
	pt = malloc(width * sizeof(array));
	if (pt == NULL)
		return (NULL);
	for (i = 1; i <= width; i++)
	{
		pt[i] = malloc(height * sizeof(*array));
		if (pt[i] == NULL)
			return (NULL);
	}

	return (pt);
}
