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
int i;
int lower_i;
while (i <= 'Z')
{
i = 'A';
lower_i = tolower(i);
putchar(lower_i);
i++;
}
return (0);
}
