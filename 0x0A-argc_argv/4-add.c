#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: array with arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int ar = 1;

	for (; argc > 1; argc--)
	{
		if (!(argv[ar][0] <= '9' && argv[ar][0] >= '0'))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[ar]);
		ar++;
	}
	printf("%d\n", sum);
	return (0);
}
