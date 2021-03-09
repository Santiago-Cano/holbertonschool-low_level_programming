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
	int length;
	char *namecpy, *ownercpy;

	new_dog = malloc(sizeof(dog_t));
	for (length = 0; name[length] != '\0'; length++)
		;
	new_dog->name = malloc(sizeof(char) * length);
	namecpy = malloc(sizeof(char) * length);
	if (new_dog->name == NULL || namecpy == NULL)
		return (NULL);
	namecpy = name;
	new_dog->name = namecpy;
	new_dog->age = age;
	if (new_dog->age != age)
		return (NULL);
	for (length = 0; owner[length] != '\0'; length++)
		;
	new_dog->owner = malloc(sizeof(char) * length);
	ownercpy = malloc(sizeof(char) * length);
	if (new_dog->owner == NULL || ownercpy == NULL)
		return (NULL);
	ownercpy = owner;
	new_dog->owner = ownercpy;
	return (new_dog);
}
