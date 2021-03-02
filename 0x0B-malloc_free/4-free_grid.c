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

	for (count < height)
		free(grid[count]);
	free(grid);
}
