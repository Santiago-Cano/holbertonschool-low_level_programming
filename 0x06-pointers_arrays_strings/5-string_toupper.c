#include "holberton.h"

/**
 * string_toupper - converts lowercase characters to uppercase
 * @str: input string
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int st = 0;

	for (; str[st] != '\0'; st++)
	{
		if (str[st] >= 'a' && str[st] <= 'z')
			str[st] -= 32;
	}
	return (str);
}
