#include "holberton.h"

/**
 * is_prime_number - check if an integer is a prime number
 * @n: Input integer
 * Return: 1 if prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}

/**
 * prime - count from 0 to n
 * @n: Original integer
 * @counter: counter from 0 to n
 * Return: 1 if prime, 0 if not, otherwise keep counting
 */
int prime(int n, int counter)
{
	int divide = n / counter;

	if (counter == n)
		return (1);
	else if ((divide * counter) == n)
		return (0);
	else
		return (prime(n, counter + 1));
}
