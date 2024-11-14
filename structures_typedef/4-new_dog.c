#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - function to create a new dog
 * @name: name of the dog
 * @age:  age of the dog
 * @owner: owner of the new dog
 *
 * Return: new dog
 *
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, name_len = 0, owner_len = 0;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	while (name[name_len] != '\0')
		name_len++;

	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		new_dog->name[i] = name[i];

	while (owner[owner_len] != '\0')
		owner_len++;

	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= owner_len; i++)
		new_dog->owner[i] = owner[i];

	new_dog->age = age;

	return (new_dog);
}
