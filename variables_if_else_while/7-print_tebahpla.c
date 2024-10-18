#include <stdio.h>
/**
 * main - function
 * Return: 0
 *
 */
int main(void)
{
	int i = 'Z';

	while (i >= 'A')
	{
		putchar(i + 32);
		i--;
	}
	putchar('\n');

	return (0);
}
