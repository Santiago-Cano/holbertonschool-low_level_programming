#include "holberton.h"

/**
 * times_table - print 9 times table
 * Return: 0
 */

void times_table(void)
{
	int horizontal;
	int vertical;
	int product;

	for (vertical = 0; vertical <= 9; vertical++)
		for (horizontal = 1; horizontal <= 9; horizontal++)
		{
			if (horizontal == 1)
				_putchar('0');
			product = (horizontal * vertical);
			if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
			if (horizontal == 9)
			_putchar('\n');
		}
}
