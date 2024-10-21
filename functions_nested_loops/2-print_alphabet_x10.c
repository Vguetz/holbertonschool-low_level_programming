#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function to print alhabet x10
 * Return: void
 *
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int x;

	while (i <= 10)
	{
		x = 'A';
	while (x <= 'Z')
	{
		_putchar(x + 32);
		x++;
	}
	i++;
	_putchar('\n');
	}
}
