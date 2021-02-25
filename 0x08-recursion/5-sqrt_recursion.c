#include "holberton.h"


/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: Input number
 * Return: natural square root of n, otherwise -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (root(n, 0));
}

/**
 * root - count from 0 to n / 2 to find a possible natural square root
 * @base: original input
 * @sqrt: possible square root
 * Return: square root of base
 */
int root(int base, int sqrt)
{
	if ((sqrt * sqrt) == base)
		return (sqrt);
	if (sqrt > (base / 2))
		return (-1);
	return (root(base, sqrt + 1));
}
