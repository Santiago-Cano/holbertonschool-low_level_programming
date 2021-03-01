#include <stdlib.h>
#include <stdio.h>
/**
 * main - return minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array with arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}
	int coins, currency = atoi(argv[1]);

	coins = currency / 25;
	currency = currency % 25;
	coins += currency / 10;
	currency = currency % 10;
	coins += currency / 5;
	currency = currency % 5;
	coins += currency / 2;
	currency = currency % 2;
	coins += currency / 1;
	printf("%d\n", coins);
	return (0);
}
