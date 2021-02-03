#include <stdio.h>

/**
 * main - return size of types
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %lo byte(s)\n", sizeof(char));
printf("Size of an int: %lo byte(s)\n", sizeof(int));
printf("Size of a long int: %lo byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lo bite(s)\n", sizeof(long long int));
printf("Size of a float: %lo byte(s)\n", sizeof(float));
return (0);
}
