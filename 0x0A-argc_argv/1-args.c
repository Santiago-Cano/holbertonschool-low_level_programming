#include <stdio.h>

/**
 * main - print number of arguments passed
 * @argc: Number of arguments
 * @argv: array containing arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int counter = 0;

	if (counter > 50)
		printf("%s\n", argv[0]);
	for (counter = 0; argc > 0; argc--)
		counter++;
	printf("%d\n", counter - 1); /* print arguments other than the name */
	return (0);
}
