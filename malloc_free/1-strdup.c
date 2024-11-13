#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - function that copies an string
 * @str: string to copy
 *
 * Return: duplicated string
 *
 *
 */
char *_strdup(char *str)
{
	int i = 0;
	int sizeOfString = 0;
	char *duplicatedStr;

	if (str == NULL)
		return (NULL);

	while (str[sizeOfString] != '\0')
	{
		sizeOfString++;
	}

	duplicatedStr = malloc((sizeOfString + 1) * sizeof(char));


	if (duplicatedStr == NULL)
		return (NULL);

	while (i < sizeOfString)
	{
		duplicatedStr[i] = str[i];
		i++;
	}
	duplicatedStr[i] = '\0';
	return (duplicatedStr);
}
