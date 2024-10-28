#include "main.h"
#include <stdio.h>
/**
 * more_numbers - function that prints 0 to 14
 *
 * Return: void;
 *
 *
 */
void more_numbers(void)
{
	int i = 0;
	int x;

	while (i < 10)
	{
		x = 0;
		while (x >= 0 && x <= 14)
		{
			if (x >= 10)
				_putchar('1');

			_putchar('0' + (x % 10));
			x++;
		}
		i++;
		_putchar('\n');
	}
}
