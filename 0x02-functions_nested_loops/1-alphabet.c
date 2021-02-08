#include "holberton.h"

/**
 * print_alphabet - print alphabet using a function
 * Return: 0
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');
}
