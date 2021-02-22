#include "holberton.h"

/**
 * _strpbrk - searches an array for a byte that matches any in accept
 * @s: input array
 * @accept: set of bytes to compare
 * Return: s or null if theres not a match
 */

char *_strpbrk(char *s, char *accept)
{
	int acc;
	int match;

	for (; *s != '\0'; s++)
	{
		for (acc = 0; accept[acc] != '\0'; acc++)
		{
			if (*s == accept[acc])
			{
				match = 1;
				break;
			}
		}
		if (match == 1)
			break;
	}
	if (match != 1)
		return ('\0');
	return (s);
}
