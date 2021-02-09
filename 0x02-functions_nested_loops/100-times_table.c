#include "holberton.h"
/**
 * print_times_table - print n times table
 * @n: external input
 * Return: 0
 */

void print_times_table(int n)
{
	int horizontal;
	int vertical;
	int product;

	if (n <= 15 && n >= 0)
		for (vertical = 0; vertical <= n; vertical++)
			for (horizontal = 0; horizontal <= n; horizontal++)
			{
				product = (horizontal * vertical);
				if (horizontal == 0)
					_putchar('0');
				else
				{
					_putchar(',');
					_putchar(' ');
					if (product < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + product);
					}
					else if (product < 100)
					{
						_putchar(' ');
						_putchar('0' + (product / 10));
						_putchar('0' + (product % 10));
					}
					else
					{
						_putchar('0' + (product / 100));
						_putchar('0' + (product / 10) % 10);
						_putchar('0' + (product % 10));
					}
				}
				if (horizontal == n)
					_putchar('\n');
			}
}
