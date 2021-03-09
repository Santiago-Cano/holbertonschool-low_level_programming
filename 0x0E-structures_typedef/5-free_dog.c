#include "dog.h"
#include <stdio.h>

/**
 * free_dog - free dog structure
 * @d: dog structure
 */
void free_dog(dog_t *d)
{
	free(*d);
}
