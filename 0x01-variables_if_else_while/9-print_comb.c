#include <stdio.h>

/**
 * main - print numbers from 0 to 9
 * Return: 0
 */

int main(void)
{
int digit1;
int digit2;
for (digit1 = '0'; digit1 <= '9'; digit1++)
{
putchar(digit1);
if (!(digit1 == '9'))
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
