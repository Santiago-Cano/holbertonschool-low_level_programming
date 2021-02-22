#include "holberton.h"

/**
 * _memset - Fill array with a constant byte
 * @s: Input array
 * @b: Constant byte
 * @n: Number of bytes to fill
 * Return: new array
 */

char *_memset(char *s, char b, unsigned int n)
{

	for (; n > 0; n--)
		s[n - 1] = b;
	return (s);
}
