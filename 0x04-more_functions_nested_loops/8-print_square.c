#include "holberton.h"

/**
 * print_square - draw a square of size n on stdout
 * @size: external input
 * Return: Nothing
 */

void print_square(int size)
{
	int square;
	int height;

	for (height = 1; height <= size; height++)
	{
		if (height != 1)
			_putchar('\n');
		for (square = 1; square <= size; square++)
			_putchar('#');
	}
	_putchar('\n');
}
