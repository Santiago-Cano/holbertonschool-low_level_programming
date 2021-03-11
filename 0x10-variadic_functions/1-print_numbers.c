#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;

	va_start(arg, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL && i + 1 < n)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
