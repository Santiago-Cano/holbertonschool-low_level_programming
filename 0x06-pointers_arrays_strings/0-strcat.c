#include "holberton.h"

/**
 * _strcat - concatenate two strings
 * @dest: dest string
 * @src: src string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{

	int counter = 0;
	int counter2 = 0;

	while (dest[counter2] != '\0')
		counter2++;
	for (; src[counter] != '\0'; counter++)
	{
		dest[counter2] = src[counter];
		counter2++;
	}
	dest[counter2] = '\0';
	return (dest);
}
