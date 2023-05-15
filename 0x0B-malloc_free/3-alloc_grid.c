#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: first array of an integer
 * @height: second array of an integer
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
int n, t, b, d;
int **a;
if (width <= 0 || height <= 0)
return (NULL);
a = malloc(sizeof(int *) * height);
if (a == NULL)
{
free(a);
return (NULL);
}
for (n = 0; n < height; n++)
{
a[n] = malloc(sizeof(int) * width);
if (a[n] == NULL)
{
for (t = n; t >= 0; t--)
{
free(a[t]);
}
free(a);
return (NULL);
}
}
for (b = 0; b < height; b++)
{
for (d = 0; d < width; d++)
{
a[b][d] = 0;
}
}
return (a);
}
