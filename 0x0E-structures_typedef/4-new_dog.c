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
	char *a = NULL;
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
	a[fill] = '\0';
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
	dog_t *newdog = NULL;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = _strdup(name);
	newdog->age = age;
	newdog->owner = _strdup(owner);

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	return (newdog);
}
