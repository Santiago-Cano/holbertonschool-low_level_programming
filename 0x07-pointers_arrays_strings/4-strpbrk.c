#include "holberton.h"

/**
 * _strpbrk - searches an array for a byte that matches any in accept
 * @s: input array
 * @accept: set of bytes to compare
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int acc;
	int nomatch;

	for (; *s != '\0'; s++)
	{
		for (acc = 0; accept[acc] != '\0'; acc++)
		{
			if (*s == accept[acc])
			{
				nomatch = 0;
				break;
			}
		}
		if (nomatch == 0)
			break;
	}
	return (s);
}
