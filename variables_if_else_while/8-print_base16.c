#include <stdio.h>
/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int x = 'A';

	while (i <= 9)
	{
		putchar(i + 48);
		i++;
	}

	while (x <= 'F')
	{
		putchar(x + 32);
		x++;
	}
	putchar('\n');

	return (0);
}
