#include "holberton.h"

/**
 * print_times_table - print n times table
 * Return: 0
 * @n: external input
 */

void print_times_table(int n)
{
	int horizontal;
	int vertical;
	int product;

	if (n <= 15 && n >= 0)
		for (vertical = 0; vertical <= n; vertical++)
			for (horizontal = 1; horizontal <= n; horizontal++)
			{
				if (horizontal == 1)
					_putchar('0');
				product = (horizontal * vertical);
				if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (product / 100));
					_putchar('0' + (product / 10) % 10);
					_putchar('0' + (product % 10));
				}
				if (horizontal == n)
					_putchar('\n');
			}
}
