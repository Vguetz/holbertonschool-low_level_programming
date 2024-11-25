#include <stdio.h>
#include "main.h"
/**
 * print_name - prints name
 * @name: name to print
 * @f: function
 *
 * Return: name
 *
 *
 */
void print_name(char *name, void (*f)(char *)) {
	if (name == NULL || f == NULL)
	{
		return; 
	}
	f(name);
}
