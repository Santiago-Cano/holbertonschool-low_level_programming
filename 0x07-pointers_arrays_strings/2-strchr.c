#include "holberton.h"

/**
 * _strchr - return pointer to first ocurrence of c
 * @s: input array
 * @c: character to find
 * Return: s
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\n'; s++)
	{
		if (*s == c)
			break;
	}
	return (s);
}
