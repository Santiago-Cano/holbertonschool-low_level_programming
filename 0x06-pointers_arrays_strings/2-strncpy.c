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

	int de = 0;
	int sr = 0;
	int end = 0;

	for (; n > 0; n--)
	{
		dest[de] = src[sr];
		de++, sr++;
		if (end == 1) /*break string -after- having set null value*/
			break;
		if (src[sr] == '\0' && n != 0)
			end = 1;
	}
	return (dest);
}
