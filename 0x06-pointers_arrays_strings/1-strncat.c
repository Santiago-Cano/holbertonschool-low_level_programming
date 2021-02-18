#include "holberton.h"

/**
 * _strncat - concatenate two strings, only using n bytes from src
 * @dest: dest string
 * @src: src string
 * @n: number of bytes to append
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int de = 0;
	int sr = 0;
	int end = 0;

	while (dest[de] != '\0')
		de++;
	for (; n > 0; n--)
	{
		dest[de] = src[sr];
		de++, sr++;
		if (end == 1)
			break;
		if (src[sr] == '\0' && n != 0)
			end = 1;
	}
	return dest;
}
