#include "holberton.h"

/**
 * rev_string - reverse a string input
 * @s: string input
 * Return: nothing
 */

void rev_string(char *s)
{
	int size = 0;
	int temp, counter;

	while (*s != '\0') /* gets size of array */
	{
		s++;
		size++;
	}
	temp = size;
	while (temp != 0) /* takes array back to position 0 */
	{
		temp--;
		s--;
	}
	for (counter = 1; counter <= size; counter++)
	{
		temp = s[(counter - 1)];
		s[(counter - 1)] = s[(size - counter)];
	}
}
