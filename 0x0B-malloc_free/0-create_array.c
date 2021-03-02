#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars, initialized with specific char
 * @size: size of array
 * @c: character to fill array
 * Return: NULL if size == 0 or if the program fails, otherwise 0
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < (int)size; i++)
		a[i] = c;

	return (a);
}
