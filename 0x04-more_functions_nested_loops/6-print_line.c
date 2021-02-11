#include "holberton.h"

/**
 * print_line - draw a straight line of size n to stdout
 * @n: external input
 * Return: Nothing
 */

void print_line(int n)
{
	int count;

	for (count = 1; count <= n; count++)
		_putchar('_');
	_putchar('\n');
}
