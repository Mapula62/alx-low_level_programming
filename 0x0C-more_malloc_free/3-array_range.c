#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: input an array of integers
 * @max: input an array of integers
 * Return: value of an integer
 */
int *array_range(int min, int max)
{
int *a, l = 0;
if (min > max)
return (NULL);
a = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (a == NULL)
return (NULL);
while (min <= max)
{
a[l] = min;
l++;
min++;
}
return (a);
}
