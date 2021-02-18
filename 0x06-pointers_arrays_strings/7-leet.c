#include "holberton.h"

/**
 * leet - converts string into leetspeak
 * @str: input string
 * Return: leetspeak string
 */

char *leet(char *str)
{
	int st = 0;
	int compare[11] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int replace[11] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int leet;

	for (; str[st] != '\0'; st++)
	{
		for (leet = 0; compare[leet] != '\0'; leet++)
			if (str[st] == compare[leet])
				str[st] = replace[leet];
	}
	return (str);
}
