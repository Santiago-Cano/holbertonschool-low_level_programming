#include <stdio.h>

/**
 * main - print fizz if divisible by 3, buzz if divisible by 5
 * Return: 0
 */

int main(void)
{
	int hundred;

	for (hundred = 1; hundred <= 100; hundred++)
	{
		if ((hundred % 3) == 0)
			printf("Fizz");
		if ((hundred % 5) == 0)
			printf("Buzz");
		if (hundred % 3 != 0 && hundred % 5 != 0)
			printf("%d", hundred);
		if (hundred < 100)
			printf(" ");
	}
	putchar('\n');
	return (0);
}
