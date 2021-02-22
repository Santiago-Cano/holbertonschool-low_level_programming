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
	for (; n > 0; n--)
	{
		*dest = *src;
		src++, dest++;
	}
	return (dest);
}
