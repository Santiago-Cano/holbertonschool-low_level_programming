#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers fron n to 98
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n > 98)
		while (n != 98)
		{
			printf("%d, ", n);
			n--;
		}
	if (n < 98)
		while (n != 98)
		{
			printf("%d, ", n);
			n++;
		}
	if (n == 98)
		printf("%d\n", n);
}
