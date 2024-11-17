#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - fuction allocates memory for an array
 *@nmemb: array
 *@size: size of bytes
 *Return: ar
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ar;
int i, arsize;

if (nmemb == 0)
return(NULL);
if (size == 0)
return(NULL);
arsize = nmemb * size;
ar = malloc(arsize);
if (ar == NULL)
return(NULL);
while (i < arsize)
{
ar[i] = 0;
i++;
}
return(ar);
}
