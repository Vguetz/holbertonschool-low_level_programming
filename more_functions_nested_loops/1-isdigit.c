#include "main.h"
#include <stdio.h>

/**
 * _isdigit - integer to analyze
 * @c: parameter to analyze
 *
 * Return: 1 if number 0 if letter
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
