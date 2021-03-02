#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for two dimensional array
 * @width: width of grid
 * @height: height of grid
 * Return: NULL on failure, otherwise pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int count1, count2;

	if (height <= 0 || width <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height); /* set first dimension */

	if (a == NULL)
		return (NULL);

	for (count1 = 0; count1 < height; count1++) /* set second dimension */
	{
		a[count1] = malloc(sizeof(int) * width);
		if (a[count1] == NULL)
		  return (NULL);
	}

	for (count1 = 0; count1 < height; count1++)
		for (count2 = 0; count2 < width; count2++)
			a[count1][count2] = 0;

	return (a);
}
