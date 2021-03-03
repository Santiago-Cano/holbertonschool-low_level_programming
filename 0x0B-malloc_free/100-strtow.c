#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - split a string into an array of words
 * @str: string
 * Return: NULL on failure or invalid input, otherwise a
 *
 */
/* Hello You*/
char **strtow(char *str)
{
	char **a;
	int length, fre;
	int letter = 0;
	int words = 1;

	if (str == NULL)
		return (NULL);
	words = numwords(str);
	a = (char **)malloc(sizeof(char) * words); /*set first dimension*/
	if (a == NULL)
		return (NULL);
	words = 0;
	for (length = 0; str[length] != '\0'; length++) /*set second dimension*/
	{
		if (str[length] == ' ' && length != 0)
		{
			a[words] = (char *)malloc(sizeof(char) * letter + 1);
			if (a[words] == NULL)
			{
				for (fre = 0; fre < words; fre++)
					free(a[fre]);
				free(a);
				return (NULL);
			}
			letter = 0;
			words++;
		}
		else
			letter++;
		if (str[length] == ' ')
			while (str[length] == ' ')
				length++;
		else
			length++;
	}
	words = 0;
	for (length = 0; str[length] != '\0'; length++) /*set values of array*/
	{
		if (str[length] == ' ' && length != 0)
		{
			a[words][letter] = '\n';
			letter = 0;
			words++;
		}
		else
		{
			a[words][letter] = str[length];
			letter++;
		}
		if (str[length] == ' ')
			while (str[length] == ' ')
				length++;
		else
			length++;
	}
	return (a);
}

/**
 * numwords - fetch number of words on string
 * @str: string
 * Return: number of words
 */
int numwords(*str)
{
	int words = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++) /*get number of words*/
	{
		if (str[i] == ' ' && i != 0)
			words++;
		if (str[i] == ' ')
			while (str[i] == ' ')
				i++;
		else
			i++;
	}
	return (words);
}
