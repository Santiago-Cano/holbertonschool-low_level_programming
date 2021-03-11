#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num1, num2, num;
	int (*op)(int, int);

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	*op = get_op_func(argv[2]);
	if (*op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	num = get_op_func(*op);
	printf("%d\n", num);
	return (0);
}
