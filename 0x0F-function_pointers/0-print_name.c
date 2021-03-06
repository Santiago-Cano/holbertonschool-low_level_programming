#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name using one of two pointers to functions
 * @name: name
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != '\0' && f != '\0')
		(*f)(name);
}
