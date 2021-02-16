#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print n numbers of an array
 * @a: array
 * @n: numbers to print
 */

void print_array(int *a, int n)
{
	int counter;

	for (counter = 1; counter <= n; counter++)
	{
		printf("%d", *a);
		a++;
		if (counter != n)
			printf(", ");
	}
	printf("\n");
}
