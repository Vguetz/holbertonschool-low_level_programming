#include "main.h"
#include <stdio.h>
/**
 * print_sign - function that returns a sign
 * @n: number
 *
 * Return: sign
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		int zero = 0;

		_putchar(zero + 48);
		return (0);
	}

	_putchar('-');
	return (-1);
}
