#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to creates
 * @size: size of the array
 * @c: char to put in array
 *
 * Return: array
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char *));
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
