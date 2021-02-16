#include "holberton.h"

/**
 * puts2 - print every other character of a string
 * @str: external string input
 * Return: nothing
 */

void puts2(char *str)
{
	int counter = 0;

	while (*str != '\0')
	{
		counter++;
		if (*str == '0')
			_putchar('0');
		str++;
		if ((counter % 2) == 0)
			_putchar(*str);
	}
	_putchar('\n');
}
