#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);

        return (a);
}
