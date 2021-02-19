#include "holberton.h"
/**
 * _strncpy - copy n bytes from string onto dest
 * @dest: dest string
 * @src: src string
 * @n: number of bytes to copy
 * Return: n bytes from src string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	/* count to n, and stop if src reaches its end */
	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
		dest[counter] = src[counter];

	for (; counter < n; counter++)
		dest[counter] = '\0';
	return (dest);
}
