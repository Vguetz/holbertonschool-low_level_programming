#include "main.h"
#include <stdio.h>
/**
 * _isupper - function that checks if a char is upper
 * @c: char to analyze
 *
 * Return: 1 if mayus 0 if minus
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

