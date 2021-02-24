#include "holberton.h"

/**
 * factorial - return the factorial of a given number
 * @n: input number
 */

int factorial(int n)
{
	if (n <= 1 && n >= 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
