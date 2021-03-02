#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free 2 dimensional grid
 * @grid: grid to free
 * @height: second dimension of grid
 */
void free_grid(int **grid, int height)
{
	int count;

	if (grid == NULL)
		free(grid);
	for (count = 0; count < height; count++)
		free(grid[count]);
	free(grid);
}
