#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - return numbers except 2 or 4
 *
 * Return: void
 *
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i >= 0 && i <= 9)
	{
		if (i == 2 || i == 4)
		{
			i++;
		} else
		{
			_putchar(i + 48);
			i++;
		}
	}
	_putchar('\n');
}
