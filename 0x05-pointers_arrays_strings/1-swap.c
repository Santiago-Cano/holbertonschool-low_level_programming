#include "holberton.h"

/**
 * swap_int - swap values of two integers
 * @a: ext. value 1
 * @b: ext. value 2
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
