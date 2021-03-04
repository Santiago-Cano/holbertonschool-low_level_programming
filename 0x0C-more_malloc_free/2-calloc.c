#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocate an array of nmemb elements of size bytes each
 * @nmemb: num of elements
 * @size: num of bytes
 * Return: null if malloc fails or if size||nmemb is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int counter = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	for (; counter < nmemb * size; counter++)
		((char *) a)[counter] = 0;
	return (a);
}
