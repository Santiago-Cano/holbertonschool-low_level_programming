#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - select correct function to operate
 * @s: operator
 * Return: pointer to function
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;

	op_t p[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	while (p[i].op != NULL)
	{
		if (*s == *p[i].op)
			return (p[i].f);
		i++;
	}
	return (NULL);
}
