#include "holberton.h"

/**
 * rot13 - runs string through rot13
 * @str: input string
 * Return: rot13 string
 */

char *rot13(char *str)
{
	int st, rot;
	char co[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char re[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	/* co = compare; re = replace */
	for (st = 0; str[st] != '\0'; st++)
	{
		for (rot = 0; co[rot] != '\0'; rot++)
			if (str[st] == co[rot])
			{
				str[st] = re[rot];
				break;
			}
	}
	return (str);
}
