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

	for (; argc > 1; argc--)
	{
		argv++;
		if (!(atoi(*argv) >= '0' && atoi(*argv) <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(*argv);
	}
	printf("%d\n", sum);
	return (0);
}
