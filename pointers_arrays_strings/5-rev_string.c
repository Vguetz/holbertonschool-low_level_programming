#include "main.h"
#include <stdio.h>
/**
 * rev_string - function to print string backwards
 * @s: string to print
 *
 * Return:void
 *
 *
 */
void rev_string(char *s)
{
	int j = 0;
	int i = 0;
	char sTemp;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	while (j < i)
	{
		sTemp = s[j];
		s[j] = s[i];
		s[i] = sTemp;
		j++;
		i--;
	}
}
