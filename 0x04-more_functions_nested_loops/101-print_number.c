#include "holberton.h"

/**
 * power - get result of 10^a where a is external input
 * @a: exponent
 * Return: result of operation
 */

int power(int a)
{
	int exponent;
	int result;

	result = 1;
	for (exponent = a; exponent > 0; exponent--)
	{
		result = result * 10;
	}
	return (result);
}
/**
 * print_number - print an integer
 * @n: external input
 * Return: nothing
 */
void print_number(int n)
{
	int digits;
	int number;
	int divide;
	int count;

	divide = 1;
	digits = 0;
	if (n == 0)
		_putchar('0');
	while ((n / divide) != 0) /*get total number of digits from the integer*/
	{
		digits++;
		divide *= 10;
	}
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	for (count = 1; count <= digits; count++)
	{
		number = n / power(digits - count); /* get first x digits from number */
		if ((number % 10) != 0)
			number = number % power((digits - count) + 1); /* get rightmost number*/
		else
			number = 0;
		_putchar('0' + number);
	}
}
