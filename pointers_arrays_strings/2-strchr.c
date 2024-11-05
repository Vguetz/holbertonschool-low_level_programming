#include "main.h"
#include <stdio.h>
/**
 * _strchr - function
 * @s: string
 * @c: char
 *
 * Return: s + c or null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
