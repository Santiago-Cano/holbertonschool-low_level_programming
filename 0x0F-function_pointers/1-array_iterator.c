#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute a function given as a parameter on an array
 * @array: array
 * @size: size of array
 * @action: function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
