#include "main.h"

/**
 * _memset - function
 * @s: pointer of memory area
 * @b: const memory bytes
 * @n: number of bytes
 *
 * Return: a
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *a = 0;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (a);
}
