#include "main.h"

/**
 * _memcpy - function
 * @dest: pointer of memory area
 * @src: const memory bytes
 * @n: number of bytes
 *
 * Return: a
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *s = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (s);
}
