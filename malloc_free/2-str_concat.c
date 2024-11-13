#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: string concatenated
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
	int sizeOfS1 = 0;
	int sizeOfS2 = 0;
	int i = 0;
	int j = 0;
	char *concatStr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[sizeOfS1] != '\0')
		sizeOfS1++;

	while (s2[sizeOfS2] != '\0')
		sizeOfS2++;

	concatStr = malloc(((sizeOfS1 + sizeOfS2) + 1) * sizeof(char));

	if (concatStr == NULL)
		return (NULL);

	while (i < sizeOfS1)
	{
		concatStr[i] = s1[i];
		i++;
	}

	while (j < sizeOfS2)
	{
		concatStr[i + j] = s2[j];
		j++;
	}

	concatStr[i + j] = '\0';

	return (concatStr);
}
