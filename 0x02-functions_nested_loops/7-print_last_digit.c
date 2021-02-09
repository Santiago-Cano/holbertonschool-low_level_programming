#include "holberton.h"

/**
 * print_last_digit - print last digit of n
 * Return: last digit
 * @n: external input
 */

int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (d < 0)
		d = (d * -1);
	_putchar('0' + d);
	return (d);
}
