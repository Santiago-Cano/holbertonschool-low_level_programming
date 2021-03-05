#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array with values from min to max
 * @min: starting integer
 * @max: max integer
 * Return: pointer containing integer values
 */
int *array_range(int min, int max)
{
	int *a;
	int counter;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (counter = 0; counter <= max - min; counter++)
		a[counter] = min + counter;

	return (a);
}
