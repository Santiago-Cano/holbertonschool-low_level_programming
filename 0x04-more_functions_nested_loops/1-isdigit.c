#include "holberton.h"

/**
 * _isdigit - check for digit
 * Return: 0
 * @c: external input
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
