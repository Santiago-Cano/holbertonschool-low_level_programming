#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - select correct function to operate
 * @s: operator
 * Return: pointer to function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t p[5] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}};

	while (i < 5)
	{
		if (s == p[i].op)
			return (p[i].f);
	}
	return (NULL);
}
