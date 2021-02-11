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
	int digits = 0;
	int number, count;
	unsigned int divide = 1;
	unsigned int num;
/* num is the external input, number is the numbers to be printed*/

	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
		num = n;
	while ((num / divide) != 0) /*get total number of digits from the integer*/
	{
		divide *= 10;
		digits++;
	}
	if (digits > 10)
		digits = 10;
	for (count = 1; count <= digits; count++)
	{
		number = num / power(digits - count); /* get first x digits from number */
		if ((number % 10) != 0)
			number = number % 10; /* get last digit */
		else
			number = 0;
		if (number < 0)
			number *= -1;
		_putchar('0' + number);
	}
}
