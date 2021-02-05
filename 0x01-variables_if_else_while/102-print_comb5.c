#include <stdio.h>

/**
 * main - print combinations of two and two digits
 * Return: 0
 */

int main(void)
{
	int digit1;
	int digit2;
	int digit3;
	int digit4;

	for (digit1 = '0'; digit1 <= '9'; digit1++)
	{
		for (digit2 = '0'; digit2 <= '9'; digit2++)
		{
			for (digit3 = (digit1); digit3 <= '9'; digit3++)
			{
				if (digit3 == digit1)
					digit4 = digit2 + 1;
				else
					digit4 = '0';
				for (; digit4 <= '9'; digit4++)
				{

					putchar(digit1);
					putchar(digit2);
					putchar(' ');
					putchar(digit3);
					putchar(digit4);
					if (!(digit1 == '9' && digit2 == '8' && digit3 == '9' && digit4 == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
