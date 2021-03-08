#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name of the file it was compiled from
 * Return: 0
 */
int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
