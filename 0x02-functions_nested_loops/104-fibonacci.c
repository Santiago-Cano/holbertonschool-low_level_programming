#include <stdio.h>

/**
 * main - print first 98 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	int counter, extra;
	unsigned long head1, head2, tail1, tail2;

	for (counter = 0; counter <= 43; counter++)
	{
		printf("%lu, %lu, ", num1, num2);
		num1 += num2;
		num2 += num1;
	}
	head1 = (num2 / 10000000000);
	head2 = (num2 % 10000000000);
	tail1 = (num1 / 10000000000);
	tail2 = (num1 % 10000000000);
	printf("%lu, %lu, ", num1, num2);
	for (; counter <= 50; counter++)
	{
		extra = (head2 + tail2) / 10000000000;
		num2 = (head2 + tail2) - (extra * 10000000000);
		num1 = (head1 + tail1 + extra);
		printf("%lu%lu", num1, num2);
		if (counter != 54)
			printf(", ");

		tail1 = head1;
		tail2 = head2;
		head1 = num1;
		head2 = num2;
	}
	printf("\n");
	return (0);
}
