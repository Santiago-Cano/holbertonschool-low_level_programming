#include "holberton.h"

/**
 * reverse_array - reverse content of an an array of integers
 * @a: array
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int counter;
	int hold;

	for (counter = 1; counter <= n / 2; counter++)
	{
		hold = a[(counter - 1)];
		a[(counter - 1)] = a[(n - counter)];
		a[(n - counter)] = hold;
	}
}
