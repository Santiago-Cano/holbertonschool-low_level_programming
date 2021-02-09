#include "holberton.h"
#include <stdio.h>
/**
 * main - print sum of multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int counter;
	int sum = 0;

	for (counter = 0; counter <= 1024; counter++)
		if ((counter % 3) == 0 || (counter % 5) == 0)
			sum = sum + counter;
	printf("%d\n", sum);
	return (0);
}
