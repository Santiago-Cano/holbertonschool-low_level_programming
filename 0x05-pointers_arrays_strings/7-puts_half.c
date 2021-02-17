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
	{
		_putchar('\n');
		return;
	}
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
	if ((counter % 2) != 0) /* account for odd input */
		counter += 1;
	for (last = counter / 2; last < counter; last++)
	{
		if (str[last] != 0)
			_putchar(str[(last)]);
	}
	_putchar('\n');
}
