#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number that allocates numbers
 * @size: size of an array
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
int x = 0, y = 0;
if (nmemb == 0 || size == 0)
return (NULL);
y = nmemb * size;
p = malloc(y);
if (p == NULL)
return (NULL);
while (x < y)
{
p[x] = 0;
x++;
}
return (p);
}
