#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * es_numero_valido - function that validates a number
 * @str: string to analyze
 *
 * Return: 0 or 1
 *
 *
 */
int es_numero_valido(const char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	if (*str == '\0')
		return (0);
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * main - function that prints an add
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 *
 *
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (!es_numero_valido(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);
	return (0);
}
