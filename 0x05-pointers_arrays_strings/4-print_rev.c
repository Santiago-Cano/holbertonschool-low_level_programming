#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: string input
 * Return: nothing
 */

void print_rev(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	while (count != 0)
	{
		count--;
		str--;
		_putchar(*str);
	}
	_putchar('\n');
}
