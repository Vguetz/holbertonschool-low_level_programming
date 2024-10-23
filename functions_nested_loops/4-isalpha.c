#include <stdio.h>
#include "main.h"
/**
 * _isalpha - function
 * @c: takes an int as parameter
 *
 * Return: 1 or 0
 *
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z')  || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
