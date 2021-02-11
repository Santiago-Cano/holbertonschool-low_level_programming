#include "holberton.h"

/**
 * print_diagonal - draw a diagonal line of size n to stdout
 * @n: external input
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int slash;
	int spaces;

	for (slash = 1; slash <= n; slash++)
	{
		_putchar(92);
		_putchar('\n');
		if (!(slash >= n))
			for (spaces = 1; spaces <= slash; spaces++)
			_putchar(' ');
	}
	if (!(n > 0))
		_putchar('\n');
}
