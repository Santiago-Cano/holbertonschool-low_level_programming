#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * chart - print char
 * @arg: char to print
 */
void chart(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * intt - print int
 * @arg: int to print
 */
void intt(va_list arg)
{
	printf("%i", va_arg(arg, int));
}
/**
 * floatt - print float
 * @arg: float to print
 */
void floatt(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * stringt - print string
 * @arg: string to print
 */
void stringt(va_list arg)
{
	char *check;

	check = va_arg(arg, char *);
	if (check == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", check);
}
/**
 * print_all - print anything
 * @format: string format
 */
void print_all(const char * const format, ...)
{
	int form = 0, ty;
	va_list arg;
	type_t type[] = {{'c', chart},
			 {'i', intt},
			 {'f', floatt},
			 {'s', stringt},
			 {'\0', '\0'}};

	va_start(arg, format);
	while (format != NULL && format[form] != '\0')
	{
		ty = 0;
		while (type[ty].formatt != '\0')
		{
			if (format[form] == type[ty].formatt)
			{
				type[ty].f(arg);
				if (format[form + 1] != '\0')
					printf(", ");
			}
			ty++;
		}
		form++;
	}
	va_end(arg);
	printf("\n");
}
