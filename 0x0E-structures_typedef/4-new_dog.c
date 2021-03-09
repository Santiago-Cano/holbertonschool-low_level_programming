#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * @str: string contained in new array
 * Return: NULL if str == NULL, pointer to our string on success
 */
char *_strdup(char *str)
{
	char *a;
	int fill, length = 0;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;

	a = malloc(sizeof(char) * length + 1);

	if (a == NULL)
		return (NULL);

	for (fill = 0; fill < length; fill++)
		a[fill] = str[fill];

	return (a);
}
/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->age = age;
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
		return (NULL);
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		return (NULL);
	}
	return (new_dog);
}
