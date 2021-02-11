#include "holberton.h"

/**
 * power - get result of 10^a where a is external input
 * @a: exponent
 * Return: result of operation
 */

int power(int a)
{
	unsigned int result;

	result = 1;
	for (; a > 0; a--)
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
	unsigned int digits = 0;
	unsigned int number, count;
	unsigned int divide = 1;

	if (n == 0)
		_putchar('0');
	while ((n / divide) != 0) /*get total number of digits from the integer*/
	{
		divide *= 10;
		digits++;
	}
	if (digits > 10)
		digits = 10;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	for (count = 1; count <= digits; count++)
	{
		number = n / power(digits - count); /* get first x digits from number */
		if ((number % 10) != 0)
			number = number % 10; /* get last digit */
		else
			number = 0;
		_putchar('0' + number);
	}
}
