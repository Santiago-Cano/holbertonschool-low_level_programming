#include "holberton.h"

/**
 * *_strcpy - copy string on src to dest
 * @dest: reciever of string on src
 * @src: source string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int counter = 0;
	int temp;

	while (*src != '\0')
	{
		counter++;
		src++;
	}
	temp = counter;
	while (temp != 0)
	{
		src--;
		temp--;
	}
	for (temp = 0; temp <= counter; temp++)
	{
		dest[(counter - temp)] = src[(counter - temp)];
	}
	return (dest);
}
