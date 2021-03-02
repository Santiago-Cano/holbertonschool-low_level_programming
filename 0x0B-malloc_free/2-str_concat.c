#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings, treat null string as empty string
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure, otherwise return new array with both strings
 */

char *str_concat(char *s1, char *s2)
{
	int length1 = 0;
	int length2 = 0;
	int fill1, fill2;
	char *a;

	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;

	a = malloc(sizeof(char) * (length1 + length2 + 1));
	if (a == NULL)
		return (NULL);

	for (fill1 = 0; fill1 < length1; fill1++)
		a[fill1] = s1[fill1];
	for (fill2 = 0; fill2 < length2; fill2++)
		a[fill1 + fill2] = s2[fill2];

	return (a);
}
