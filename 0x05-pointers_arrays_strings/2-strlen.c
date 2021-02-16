#include "holberton.h"

/**
 * _strlen - return length of a string
 * @s: external string
 * Return: length of string as an integer
 */

int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}
