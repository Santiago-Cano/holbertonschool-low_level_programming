#include "holberton.h"

/**
 * binary_to_uint - convert binary string into base 10 value
 * @b: binary string
 * Return: base 10 value or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, bit = 0;

	if (b == NULL)
		return (0);
	while (b[bit + 1])
		bit++;
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		if (*b == '1')
			num += (1 << bit);
		bit--;
		b++;
	}
	return (num);
}
