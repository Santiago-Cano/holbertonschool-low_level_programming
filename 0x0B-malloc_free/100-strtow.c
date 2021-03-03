#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - split a string into an array of words
 * @str: string
 * Return: NULL on failure or invalid input, otherwise a
 *
 */
/*  Hello You*/
char **strtow(char *str)
{
	char **a;
	int length;
	int letter = 0;
	int words = 1;
	int space = 0;

	if (str == NULL || str == "")
		return (NULL);
	for (length = 0; *str != '\0'; str++)
	{
		if (*str == ' ' && length != 0)
			words++;
		while (*str == ' ')
		{
			str++;
			space++;
		}
		length++;
	}
	str -= (length + space);
	a = malloc(sizeof(char) * (words));
	words = 0;
	for (; *str != '\0'; str++)
	{
		if (*str == ' ')
		{
			a[words][letter] = '\n';
			a[words][letter]
	return (a);
}
