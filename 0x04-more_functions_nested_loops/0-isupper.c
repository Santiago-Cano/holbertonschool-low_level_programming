#include "holberton.h"

/**
 * _isupper - check for uppercase character
 * Return: 1 or 0
 * @c: external input
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
