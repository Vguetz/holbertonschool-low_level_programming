#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that liberates a dog of demons inside
 * @d: dog
 *
 * Return: void
 *
 *
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
