#include "main.h"
/**
 * _strcpy - function to copy string
 * @dest: destiny word
 * @src: soruce word
 *
 * Return: word copied
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
