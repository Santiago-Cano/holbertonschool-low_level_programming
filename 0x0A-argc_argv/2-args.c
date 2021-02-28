#include <stdio.h>

/**
 * main - print all arguments it recieves
 * @argc: number of arguments
 * @argv: array with arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	argv++;
	for (; argc > 1; argc--)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
