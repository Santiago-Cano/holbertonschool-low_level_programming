#include "holberton.h"

/**
 * _islower - check for lowercase character
 * Return: 0
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
