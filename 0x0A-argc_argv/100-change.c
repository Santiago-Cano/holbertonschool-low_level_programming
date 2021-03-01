#include <stdio.h>
#include <stdlib.h>

/**
 * coins - calculate number of coins needed and print them
 * @currency: value of currency argument
 */

void coins(int currency)
{
	int coin = 0;

	while (currency != 0)
	{
		if (currency >= 25)
		{
			currency -= 25;
			coin++;
		}
		else if (currency >= 10)
		{
			currency -= 10;
			coin++;
		}
		else if (currency >= 5)
		{
			currency -= 5;
			coin++;
		}
		else if (currency >= 2)
		{
			currency -= 2;
			coin++;
		}
		else
		{
			currency -= 1;
			coin++;
		}
	}
	printf("%d\n", coin);
}
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
	int currency = atoi(argv[1]);

	coins(currency);
	return (0);
}
