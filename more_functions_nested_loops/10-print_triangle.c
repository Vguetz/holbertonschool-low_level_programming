#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of a triangle to print
 *
 * Return: void
 *
 */

void print_triangle(int size)
{
	int i = 1, j;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		while (i <= size)
		{
			j = i;
			while (j < size)
			{
				_putchar(' ');
				j++;
			}
			j = 1;

			while (j <= i)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
