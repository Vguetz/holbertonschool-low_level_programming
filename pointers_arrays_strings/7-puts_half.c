#include "main.h"
#include <stdio.h>
/**
 * puts_half - function that prints the string beggining in the half
 * @str: string to print
 *
 * Return: void
 *
 *
 */

void puts_half(char *str)
{
	int length = 0, i;
	int half;

	while (str[length] != '\0')
	{
		length++;
	}

	half = (length + 1) / 2;
	i = half;
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
