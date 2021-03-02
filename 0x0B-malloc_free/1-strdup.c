#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * @str: string contained in new array
 * Return: NULL if str == NULL, pointer to our string on success
 */

char *_strdup(char *str)
{
	char *a;
	int fill, length = 0;

	while (str[length] != '\0')
		length++;

	a = malloc(sizeof(char) * length);

	if (a == NULL)
		return (NULL);

	for (fill = 0; fill < length; fill++)
		a[fill] = str[fill];

	return (a);
}
