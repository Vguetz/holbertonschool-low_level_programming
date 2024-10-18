#include <stdio.h>
/**
 * main - function
 * Return: return 0
 */

int main(void)
{
int i = 'A';
while (i <= 'Z')
{
putchar(i + 32);
putchar (i);
i++;
}
putchar('\n');
return (0);
}
