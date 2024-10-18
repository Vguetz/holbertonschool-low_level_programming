#include <stdio.h>
#include <ctype.h>
/**
* main - Princpal function
*
* Return: alphabet
*
*/
int main(void)
{
int i = 'A';
while (i <= 'Z')
{
putchar(i + 32);
i++;
}
putchar('\n');
return (0);
}
