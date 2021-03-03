#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments of program
 * @ac: number of arguments
 * @av: arguments
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int argument, letter;
	int length = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (argument = 0; argument < ac; argument++)
	{
		if (av[argument] == NULL)
		{
			for (letter = 0; letter < ac; letter++)
				free(av[letter]);
			free(av);
			return (NULL);
		}
		for (letter = 0; av[argument][letter] != '\0'; letter++)
			length++;
	}
	a = malloc(sizeof(char) * length);
	length = 0;
	for (argument = 0; argument < ac; argument++)
	{
		for (letter = 0; av[argument][letter] != '\0'; letter++)
		{
			a[length] = av[argument][letter];
			length++;
		}
		a[length] = '\n'; /* print newline after every argument */
		length++;
	}
	return (a);
}
