#include "holberton.h"

/**
 * set_bit - set value of bit at a given index
 * @n: number
 * @index: bit to change
 * Return: value of bit, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n |= 1 << index;
	return (1);
}
