#include "main.h"
#include <stdio.h>
/**
 * print_rev - function to print string backwards
 * @s: string to print
 *
 * Return:void
 *
 *
 */
void print_rev(char *s)
{
	int j = 0;
	int i = 0;
	char *str = s;

	while (*s)
	{
		i++;
		s++;
	}
	j = i - 1;

	while (j >= 0)
	{
		_putchar(*(str + j));
		j--;
	}
	_putchar('\n');
}
