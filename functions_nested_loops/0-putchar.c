#include <stdio.h>
int _putchar(char c);
/**
 * main - entry point
 * Return: 0
 *
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}
	putchar('\n');
	return (0);
}
