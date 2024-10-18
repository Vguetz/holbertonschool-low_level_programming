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
for (int i = 'A'; i <= 'Z'; i++)
{
int lower_i = tolower(i);
putchar(lower_i);
return (0);
}
}
