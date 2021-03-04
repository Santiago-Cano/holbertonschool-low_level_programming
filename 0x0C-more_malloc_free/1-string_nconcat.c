#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - create pointer with s1, followed by n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from second string
 * Return: new pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	int strlen1, strlen2, i;
	int in = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (strlen1 = 0; s1[strlen1] != '\0'; strlen1++)
		;
	for (strlen2 = 0; s2[strlen2] != '\0'; strlen2++)
		;
	if (in >= strlen2)
		in = strlen2;
	a = malloc(sizeof(char) * strlen1 + in + 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < strlen1 + in; i++)
	{
		if (i < strlen1)
			a[i] = s1[i];
		else
		{
			a[i] = *s2;
			s2++;
		}
	}
	a[i] = '\0';
	return (a);
}
