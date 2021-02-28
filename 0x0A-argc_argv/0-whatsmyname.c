#include <stdio.h>

/**
 * main - print the program name, followed by a new line
 * @argc: number of command line arguments
 * @argv: array with the command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
