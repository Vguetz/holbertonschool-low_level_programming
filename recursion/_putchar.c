#include <unistd.h>
/**
 * _putchar - function
 * @c: texto a imprimir
 *
 * Return: void
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
