#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - print the chessboard
 * @a: pointer
 * Return:0
 *
 */
void print_chessboard(char (*a)[8])
{
int i, b;

i = b = 0;
while (i < 8)
{
b = 0;
while (b < 8)
{
_putchar(a[i][b]);
b++;
}
_putchar('\n');
i++;
}
}
