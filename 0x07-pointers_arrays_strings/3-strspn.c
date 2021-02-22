#include "holberton.h"

/**
 * _strspn - find number of starting bytes that match bytes from accept
 * @s: input array
 * @accept: bytes to match
 * Return: number of matching bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int match = 0;
	int acc;
	int nomatch;

	for (; *s != '\n'; s++)
	{
		for (acc = 0; accept[acc] != '\0'; acc++)
		{
			nomatch = 1;
			if (*s == accept[acc])
			{
				match++;
				nomatch = 0;
				break;
			}
		}
		if (nomatch == 1)
			break;
	}
	return (match);
}
