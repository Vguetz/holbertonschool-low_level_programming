#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * print_last_digit - function
 * @n: number
 *
 * Return: last digit of a number
 *
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		_putchar('8');
		return 8;
	}

	if (n < 0)
	{
		n = -n;
	}
	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (0 + last_digit);
}
