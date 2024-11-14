#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function to init an structure of a dog
 * @d: dog structure
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 *
 * Return: void
 *
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	*d = the_dog;
	the_dog.name = *name;
	the_dog.age = age;
	the_dog.owner = *owner;
}
