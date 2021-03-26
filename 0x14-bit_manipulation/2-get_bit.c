#include "holberton.h"

/**
 * get_bit - fetch value of bit at a given index
 * @n: number
 * @index: bit to search for
 * Return: value of bit, -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return (1 & (n >> index));
}
