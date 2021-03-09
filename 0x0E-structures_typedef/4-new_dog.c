#include "dog.h"

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

	new_dog->name = name;
	if (new_dog->name == NULL)
		return (NULL);
	new_dog->age = age;
	if (new_dog->age != age)
		return (NULL);
	new_dog->owner = owner;
	if (new_dog->age == NULL)
		return (NULL)
	return (new_dog);
}
