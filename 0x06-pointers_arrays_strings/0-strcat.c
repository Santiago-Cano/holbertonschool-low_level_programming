#include "holberton.h"

/**
 * _strcat - concatenate two strings
 * @dest: dest string
 * @src: src string
 * Return: both strings
 */

char *_strcat(char *dest, char *src)
{

	int counter = 0;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		counter++;
		src++;
	}
	src -= counter;
	for (; counter >= 0; counter--)
	{
		*dest = *src;
		dest++, src++;
	}
	*dest = '\0';
	return (dest);
}
