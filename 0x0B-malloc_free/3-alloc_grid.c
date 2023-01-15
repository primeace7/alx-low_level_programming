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
	int i, j;
	int *array;
	int **pt;

	if (width <= 0 || height <= 0)
		return (NULL);
	pt = malloc(height * sizeof(array));
	if (pt == NULL)
	{
		free(pt);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pt[i] = malloc(width * sizeof(*array));
		if (pt[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(pt[j]);
			free(pt);
			return (NULL);
		}
	}

	return (pt);
}
