#include <stdio.h>
/**
* main - function
*
* Return: 0
*
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + 48);

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
