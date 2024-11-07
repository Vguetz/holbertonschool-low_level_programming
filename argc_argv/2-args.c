#include <stdio.h>
/**
 * main - prints a argv
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 *
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);

}
