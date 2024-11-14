#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - function that reserves memory space
 * @b: quantity of memory to reserve
 *
 * Return: void
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
