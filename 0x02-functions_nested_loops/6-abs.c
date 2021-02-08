#include "holberton.h"

/**
 * _abs - print absolute value of an integer
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
