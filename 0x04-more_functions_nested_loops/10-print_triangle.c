#include "holberton.h"

/**
 * print_triangle - draw a triangle of size n to stdout
 * @size: external input
 * Return: Nothing
 */

void print_triangle(int size)
{
	int hashtag;
	int spaces;
	int repeat;

	for (repeat = 1; repeat <= size; repeat++)
	{
		for (spaces = (size - repeat); spaces > 0; spaces--)
			_putchar(' ');
		for (hashtag = (size + repeat); hashtag > size; hashtag--)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
