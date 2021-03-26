#include "holberton.h"

/**
 * flip_bits - find number of bits that need to be flipped to get to m from n
 * @n: start
 * @m: goal
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits = 0;
	int bit1;
	int bit2;

	while (n != 0 || m != 0)
	{
		bit1 = 0, bit2 = 0;

		if (((n >> 1) << 1) == n)
			bit1 = 0;
		else
			bit1 = 1;
		if (((m >> 1) << 1) == m)
			bit2 = 0;
		else
			bit2 = 1;
		if (bit1 != bit2)
			bits++;
		n >>= 1;
		m >>= 1;
	}
	return (bits);
}
