#include "holberton.h"

/**
 * print_binary - convert number to binary and print the result
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned long int n2 = n;

	if (n2 == 0)
		_putchar('0');
	if (n2 > 0)
	{
		n2 = n2 >> 1;
		if (n2 > 0)
			print_binary(n2);
		if (n2 << 1 == n)
			_putchar('0');
		else
			_putchar('1');
	}
}
