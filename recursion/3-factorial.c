#include "main.h"

/**
 * factorial - return factorial of n number
 * @n: int
 *
 * Return: factorial of n
 *
 */
int factorial(int n)
{
	int resultado;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);

	resultado = n * factorial(n - 1);
	return (resultado);
}
