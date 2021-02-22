#include "holberton.h"

/**
 * _strchr - return pointer to first ocurrence of c
 * @s: input array
 * @c: character to find
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int match = 0;

	for (; *s != '\n'; s++)
		if (*s == c)
		{
			match = 1;
			break;
		}
	if (match == 0)
		return ('\0');
	return (s);
}
