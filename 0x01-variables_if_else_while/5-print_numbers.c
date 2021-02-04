#include <stdio.h>

/**
 * main - print base 10 single digits starting from 0
 * Return: 0
 */

int main(void)
{
char digits;
for (digits = '0'; digits <= '9'; digits++)
{
putchar(digits);
}
putchar('\n');
return (0);
}
