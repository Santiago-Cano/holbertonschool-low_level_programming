#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print string arguments
 * @separator: string in between each normal string
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *string;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(arg, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator != NULL && i + 1 < n)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
