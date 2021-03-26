#include "holberton.h"

/**
 * clear_bit - clear bit at a given index
 * @n: number
 * @index: bit to clear
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int hi = 1;

	if (index > 32)
		return (-1);
	hi = ~(hi << index);
	*n = *n & hi;
	return (1);
}
