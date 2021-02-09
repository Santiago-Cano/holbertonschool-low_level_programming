#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long num1 = 1;
	long num2 = 2;
	int counter;

	for (counter = 0; counter <= 24; counter++)
	{
		printf("%ld, %ld", num1, num2);
		num1 += num2;
		num2 += num1;
		if (counter != 24)
			printf(", ");
	}
	printf("\n");
	return (0);
}
