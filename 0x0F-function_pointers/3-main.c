#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - print result of operation with two numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (*f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = f(num1, num2);
	printf("%d\n", res);
	return (0);
}
