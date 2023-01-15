#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free a 2d array created with malloc
 * @grid: the name of the grid to free
 * @height: the number of rows in the grid
 * Return: void (nothing)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		free(grid);
	}

}
