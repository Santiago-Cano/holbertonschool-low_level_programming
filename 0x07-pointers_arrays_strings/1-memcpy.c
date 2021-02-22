#include "holberton.h"

/**
 * _memcpy - copy n bytes from array src to dest
 * @dest: new output array
 * @src: input array
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0;

	for (; counter < n; counter++)
		dest[counter] = src[counter];
	return (dest);
}
