#include <stdio.h>

/**
 * main - print out digits from 0 to 9
 * Return: 0
 */

int main(void)
{
int digits;
for (digits = 0; digits <= 9; digits++)
{
putchar(digits);
}
putchar('\n');
return (0);
}
