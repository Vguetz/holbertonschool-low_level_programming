#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - searches string for set of bytes
 * @s: string to check
 * @accept: substring of chars
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				return (s);
			i++;
		}
		s++;
	}
	return (NULL);
}
