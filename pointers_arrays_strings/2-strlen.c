#include <stdio.h>
#include <string.h>
/**
 * _strlen - function that prints the length of the string
 * @s: string to calculate length
 *
 * Return: length
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
