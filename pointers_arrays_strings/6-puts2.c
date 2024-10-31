#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints a string without pairs
 * @str: string to print
 *
 * Return:void
 *
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (*str)
	{
		if (i % 2 == 0)
		{
		_putchar(*str);
		}
		str++;
		i++;
	}
	_putchar('\n');
}
