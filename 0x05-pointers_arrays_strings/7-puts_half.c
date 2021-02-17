#include "holberton.h"

/**
 * puts_half - prints last half of a string
 * @str: external string input
 * Return: nothing
 */

void puts_half(char *str)
{
	int counter = 0;
	int last, temp;

	if (*str == '\0')
		return;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	temp = counter;
	while (temp != 0)
	{
		str--;
		temp--;
	}
	for (last = counter / 2; last < counter; last++)
	{
			_putchar(str[(last)]);
	}
	_putchar('\n');
}
