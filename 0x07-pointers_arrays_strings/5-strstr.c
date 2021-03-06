#include "holberton.h"
#include <stdlib.h>
/**
 * _strstr - locate first ocurrence of full match to needle in haystack
 * @haystack: Input array
 * @needle: bytes to compare
 * Return: pointer to first byte of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int nee = 0;
	int match;

	if (*needle == '\0')
		return (haystack);
	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			for (nee = 0; needle[nee] != '\0'; nee++)
				if (!(haystack[nee] == needle[nee]))
				{
					match = 0;
					break;
				}
				else
					match = 1;
		}
		if (match == 1)
			break;
	}
	if (match == 0)
		return (NULL);
	return (haystack);
}
