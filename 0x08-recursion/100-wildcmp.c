#include "holberton.h"

/**
 * wildcmp - check if two strings are identical. * can replace any string
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 2));
	else if (*s2 != '*')
		return (0);
	else
		return (wild(s1, s2, s2));
}

/**
 * wild - process a * wildcard
 * @s1: original string
 * @s2: original second string
 * @extra: variable to check for wildcard jumps
 * Return: 1 or 0
 */
int wild(char *s1, char *s2, char *extra)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if ((*s2 + 1) == '*')
		return (wild(s1, s2 + 1, s2 + 1));
	else if (*s1 == '\0' && *s2 == '*')
		return (wild(s1, s2 + 1, s2 + 1));
	else if (*s1 != (*s2 + 1) && *s2 == '*')
		return (wild(s1 + 1, s2, s2));
	else if (*s1 == *extra && *s2 == '*' && *extra != *s2)
		return (wild(s1 + 1, s2, s2));
	else if (*s1 == (*s2 + 1) && *s2 == '*' && *extra != '\0')
	{
		if (*extra <= (*s2 + 1))
			return (wild(s1, s2, s2 + 2));
		else
			return (wild(s1, s2, extra + 1));
	}
	else if (*s1 == (*s2 + 1) && *s2 == '*')
		return (wild(s1 + 1, s2 + 1, s2 + 1));
	else if (*s1 == *s2)
		return (wild(s1 + 1, s2 + 1, s2 + 1));
	else
		return (0);
}
