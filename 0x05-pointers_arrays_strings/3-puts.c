#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: string input
 * Return: nothing
 */

void _puts(char *str)
{
	_putchar(*str);
	while (*str != '\0')
	{
		str++;
		_putchar(*str);
	}
	_putchar('\n');
}
