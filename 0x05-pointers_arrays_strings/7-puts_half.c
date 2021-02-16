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
	if ((counter % 2) != 0) /* make sure counter is even */
		counter -= 1;
	for (last = counter / 2; last <= counter; last++)
	{
		_putchar(str[(last)]);
	}
	_putchar('\n');
}
