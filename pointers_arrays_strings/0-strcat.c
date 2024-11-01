#include "main.h"
/**
 * _strcat - swap a word for another
 * @dest: destiny to paste the word
 * @src: source to copy the word
 *
 * Return: dest|
 *
 */
char *_strcat(char *dest, char *src)
{
	char *d;
	char *s;


	d = dest;
	while (*d != '\0')
	{
		d++;
	}

	s = src;

	while (*s != '\0')
	{
		*d = *s;
		s++;
		d++;

	}
	*d = '\0';

	return (dest);
}
