#include "dog.h"
#include <stdlib.h>
#include <string.h>
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
	int length;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->age = age;
	if (name != NULL)
	{
		for (length = 0; name[length] != '\0'; length++)
			;
		new_dog->name = malloc(sizeof(char) * length);
		if (new_dog->name == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		new_dog->name = strdup(name);
	}
	else
		new_dog->name = NULL;
	if (owner != NULL)
	{
		for (length = 0; owner[length] != '\0'; length++)
			;
		new_dog->owner = malloc(sizeof(char) * length);
		if (new_dog->owner == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		new_dog->owner = strdup(owner);
	}
	else
		new_dog->owner = NULL;
	return (new_dog);
}
