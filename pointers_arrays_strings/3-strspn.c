#include "main.h"
#include <stdio.h>
/**
 * _strspn - function
 * @s: string
 * @accept: string
 *
 *
 * Return: number
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int a = 0;
	int b;

	while (*s)
	{
		i = 0;
		b = a;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				a++;
			i++;
		}
	if (b == a)
		break;
	s++;
	}
	return (a);
}
