#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int t = 0;
	int newword = 0;

	for (; s[t] != '\0' ; s++)
	{
		if (s[t] >= 'a' && s[t]<= 'z')
			if (newword == 1)
				s[t] -= 32;
		newword = 0;
		if (s[t] == ' ' || s[t] == '\t' || s[t] == '\n' ||
		    s[t] == ',' || s[t] == ';' || s[t] == '.' ||
		    s[t] == '!' || s[t] == '?' || s[t] == '"' ||
		    s[t] == '(' || s[t] == ')' || s[t] == '{' ||
		    s[t] == '}')
			newword = 1;
	}
	return (s);
}
