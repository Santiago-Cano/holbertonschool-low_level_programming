#include "holberton.h"

/**
 * print_more_numbers - print numbers from 0 to 14, a total of 10 times.
 * Return: Nothing
 */

void print_more_numbers(void)
{
	int i;
	int counter;

	for (counter = '0'; counter <= '9'; counter++)
		for (ten = '0'; ten <= '1'; ten++)
			for (i = '0'; i <= '9'; i++)
			{
				if ((ten != '0') || (ten != '1' && i >= '4'))
					_putchar(ten);

				_putchar(i);
			}
	_putchar('\n');
}
