#include "dog.h"
#include <stdlib.h>
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
	int length, i;
	char *namecpy, *ownercpy;

	new_dog = malloc(sizeof(dog_t));
	new_dog->age = age;
	if (name != NULL)
	{
		for (length = 0; name[length] != '\0'; length++)
			;
		new_dog->name = malloc(sizeof(char) * length);
		namecpy = malloc(sizeof(char) * length);
		if (new_dog->name == NULL || namecpy == NULL)
		{
			free(new_dog);
			free(namecpy);
			return (NULL);
		}
		namecpy = name;
		for (i = 0; namecpy[i] != '\0'; i++)
			new_dog->name[i] = namecpy[i];
	}
	else
		new_dog->name = NULL;
	for (length = 0; owner[length] != '\0'; length++)
		;
	new_dog->owner = malloc(sizeof(char) * length);
	ownercpy = malloc(sizeof(char) * length);
	if (new_dog->owner == NULL || ownercpy == NULL)
	{
		free(new_dog);
		free(namecpy);
		return (NULL);
	}
	ownercpy = owner;
	new_dog->owner = ownercpy;
	return (new_dog);
}
