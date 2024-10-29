#include "main.h"
#include <stdio.h>
/**
 * print_square - function that prints square
 * @size: size of the square
 *
 * Return: void;
 *
 */


void print_square(int size)
{
	int i, x;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		x = 0;
		while (x < size)
		{
			i = 0;
			while (i < size)
			{
				_putchar('#');
				i++;
			}
		_putchar('\n');
		x++;
		}
	}
}
