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
	int check;

	for (; argc > 1; argc--)
	{
		for (check = 0; argv[ar][check] != '\0'; check++)
			if (!(argv[ar][check] <= '9' && argv[ar][check] >= '0'))
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
