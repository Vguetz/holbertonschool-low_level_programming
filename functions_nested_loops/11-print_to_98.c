#include <stdio.h>
#include "main.h"

/**
 * print_number - function to print an integer
 * @n: parameter
 */
void print_number(int n)
{
	if (n < 0)
	{

		n = -n;
		_putchar('-');
	}

	if (n >= 10)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}
/**
 * print_to_98 - function to print to 98
 * @n: number
 *
 * Return:void
 *
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			print_number(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
		print_number(98);
	} else if (n > 98)
	{
		while (n > 98)
		{
			print_number(n);
			_putchar(',');
			_putchar(' ');
			n--;

		}
		print_number(98);
	} else
	{
		print_number(98);
	}
	_putchar('\n');
}
