#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet using a function
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int repeat;

	for (repeat = 0; repeat <= 10; repeat++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
		_putchar('\n');
	}
}
