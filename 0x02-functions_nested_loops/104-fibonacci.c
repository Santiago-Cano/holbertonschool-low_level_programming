#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	int counter;
	long num1, num11, num2, num22;

	for (counter = 0; counter <= 48; counter++)
	{
		printf("%ld, %ld", num1, num2);
		num1 += num2;
		num2 += num1;
		if (counter != 48)
			printf(", ");
	}
	printf("\n");
	return (0);
}
