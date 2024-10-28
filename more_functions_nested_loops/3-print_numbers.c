#include "main.h"
/**
 * print_numbers - function that prints numbers between 0 and 10
 *
 * Return: void
 */
void print_numbers(void)
{
	int i =0;

	while(i <= 9)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
