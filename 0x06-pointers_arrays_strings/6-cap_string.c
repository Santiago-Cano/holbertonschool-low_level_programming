#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int t = 0;

	if (s[t] >= 'a' && s[t] <= 'z')
		s[t] -= 32;
	for (; s[t] != '\0' ; t++)
	{
		if (s[t - 1] == ' ' || s[t - 1] == '\t' || s[t - 1] == '\n' ||
		    s[t - 1] == ',' || s[t - 1] == ';' || s[t - 1] == '.' ||
		    s[t - 1] == '!' || s[t - 1] == '?' || s[t - 1] == '"' ||
		    s[t - 1] == '(' || s[t - 1] == ')' || s[t - 1] == '{' ||
		    s[t - 1] == '}')
			if (s[t] >= 'a' && s[t] <= 'z')
				s[t] -= 32;
	}
	return (s);
}
