#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array in a string
 * @a: array to print
 * @n: size of the array
 *
 * Return: void
 *
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
		printf(", ");
		}
		i++;
	}
	putchar('\n');
}
