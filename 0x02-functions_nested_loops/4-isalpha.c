#include "holberton.h"

/**
 * _isalpha - check for alphabetic character
 * Return: 1 or 0
 */

int _isalpha(int c);
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
