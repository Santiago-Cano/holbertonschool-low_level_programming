#include <stdio.h>

/**
 * main - find largest prime factor of a number
 * Return: 0
 */

int main(void)
{
	unsigned long number = 612852475143;
	int divide = 2;
	int largest = 0;

	while (number != 1)
	{
		if ((number % divide) != 0)
			divide++;
		else
			number /= divide;
		if (number != 1)
			largest = divide;
	}
	printf("%d\n", largest);
	return (0);
}
