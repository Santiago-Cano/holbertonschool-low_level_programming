#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - sum two diagonals of a square matrix
 * @a: array
 * @size: size of square
 */

void print_diagsums(int *a, int size)
{
	long int sum = 0;
	int vertical;

	for (vertical = 0; vertical < size; vertical++)
		sum += a[(vertical * size) + vertical];
	printf("%li, ", sum);
	sum = 0;
	for (vertical = 1; vertical <= size; vertical++)
		sum += a[(vertical * size) - vertical];
	printf("%li\n", sum);
}
