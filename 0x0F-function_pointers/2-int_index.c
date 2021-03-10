#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search for an integer
 * @array: array containing integers
 * @size: size of array
 * @cmp: function to compare integer in
 * Return: first element that matches cmp, otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, num;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		num = array[i];
		if ((cmp(num)) != 0)
			return (i);
	}
	return (-1);
}
