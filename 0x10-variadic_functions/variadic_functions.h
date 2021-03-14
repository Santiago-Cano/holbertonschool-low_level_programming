#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * type_t - struct
 * @format: format type
 * @f: pointer to function
 */
typedef struct
{
	char format;
	void (*f)(va_list);
} type_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void chart(va_list arg);
void intt(va_list arg);
void floatt(va_list arg);
void stringt(va_list arg);

#endif
