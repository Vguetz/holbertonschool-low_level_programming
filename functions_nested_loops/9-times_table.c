#include "main.h"
#include <stdio.h>
/**
 * print_number - function
 * @n: parameter
 *
 *
 * Return: number
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
 * times_table - multiplies 9 table
 * Return: table of 9
 *
 */
void times_table(void)
{
	int product;
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			product = i * j;
			print_number(product);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
