#include "holberton.h"

/**
 * get_endianness - check if 'a' data is stored as big or little endian
 * Return: 1 if little endian, 0 if big
 */
int get_endianness(void)
{
	int a = 1;
	char *s = (char *)&a;

	return (*s);
}
