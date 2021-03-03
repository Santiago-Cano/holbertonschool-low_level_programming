#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * letters - find number of letters per word
 * @str: string
 * @words: number of words
 * Return: array with number of letters per word
 */
char *letters(char *str, int words, int length)
{
	char *l[words];
	int i, letter = 0;

	words = 0;
	for (i = 0; i < length; i++)
	{
		if (str[i] == ' ' && i != 0)
		{
			*l[words] = letter;
			letter = 0;
			words++;
		}
		else
			letter++;
		if (str[i] == ' ')
			while (str[i] == ' ' && i < length)
				i++;
		else
			i++;
	}
	return (*l);
}
/**
 * numwords - fetch number of words on string
 * @str: string
 * Return: number of words
 */
int numwords(char *str, int length)
{
	int words = 0;
	int i;

	for (i = 0; i < length; i++) /*get number of words*/
	{
		if (str[i] == ' ' && i != 0)
			words++;
		if (str[i] == ' ')
			while (str[i] == ' ' && i < length)
				i++;
		else
			i++;
	}
	return (words);
}
/**
 * strtow - split a string into an array of words
 * @str: string
 * Return: NULL on failure or invalid input, otherwise a
 */
char **strtow(char *str)
{
	char **a;
	char *i;
	int count, j;
	int letter = 0;
	int words = 1;

	if (str == NULL)
		return (NULL);
	for (count = 0; str[count] != '\0'; count++);
	words = numwords(str, count);
	a = (char **)malloc(sizeof(char) * words); /*set first dimension*/
	if (a == NULL)
		return (NULL);
	i = letters(str, words, count);
	for (j = 0; j < words; j++) /*set second dimension*/
		a[count] = (char *)malloc(sizeof(char) * i[j] + 1);
	for (j = 0; j < count; j++) /*set values of array*/
	{
		if (str[j] == ' ' && j != 0)
		{
			a[words][letter] = '\n';
			letter = 0;
			words++;
		}
		else
			a[words][letter] = str[j];
		if (str[j] == ' ')
			while (str[j] == ' ' && j < count)
				j++;
		else
			j++;
	}
	return (a);
}
