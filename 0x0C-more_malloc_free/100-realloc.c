#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocate new memory to ptr and free old one
 * @ptr: memory block
 * @old_size: current size in bytes
 * @new_size: new size in bytes
 * Return: new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	unsigned int counter;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		return (a);
	}
	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	for (counter = 0; counter < new_size && counter < old_size; counter++)
		((char *) a)[counter] = ((char *) ptr)[counter];
	free(ptr);
	return (a);
}
