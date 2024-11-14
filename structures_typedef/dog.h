#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure
 * @owner: name of the owner
 * @name: name of the dog
 * @age: age of dog
 *
 * Description: Structure to create a dog
 */
typedef struct dog
{
	char *owner;
	char *name;
	float age;
} my_dog;
#endif
