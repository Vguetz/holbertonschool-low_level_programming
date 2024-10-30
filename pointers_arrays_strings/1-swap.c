#include "main.h"
/**
 * swap_int - function to swap numbers
 * @a: first number to swap
 * @b: second number to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
