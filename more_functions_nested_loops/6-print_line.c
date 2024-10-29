#include "main.h"
/**
 * print_line - function to print lines
 * @n: number of lines
 *
 * Return: void;
 *
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
