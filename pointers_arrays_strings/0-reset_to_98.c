#include "main.h"
/**
 * reset_to_98 - function that takes any pointer and converts to 98
 * @n: pointer of n
 *
 * Return: void
 *
 */

void reset_to_98(int *n)
{
	int num = 98;
	int *p = &num;
	*n = *p;
}
