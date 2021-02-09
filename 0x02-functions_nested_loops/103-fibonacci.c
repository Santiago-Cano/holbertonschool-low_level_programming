#include <stdio.h>

/**
 * main - print sum of even fibonacci terms below 4,000,000
 * Return: 0
 */

int main(void)
{
	long num1 = 1;
	long num2 = 2;
	int sum = 2;
	int counter;

	for (counter = 0; counter <= 15; counter++)
	{
		num1 += num2;
		if ((num1 % 2) == 0)
			sum += num1;
		num2 += num1;
		if ((num2 % 2) == 0)
			sum += num2;
	}
	printf("%d\n", sum);
	return (0);
}
