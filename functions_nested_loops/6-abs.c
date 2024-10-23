#include "main.h"
#include <stdio.h>
/**
 * _abs - function to compute the absolute value of an integer and print it
 * @n: the integer to check
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{

	if (n == 0)
	{
		return (0);
	}

	if (n < 0)
	{
		n = -n;
	}
	return (n);
}

