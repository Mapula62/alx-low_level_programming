#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: input array
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: index of the first element for which cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int y = 0;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (y < size)
{
if (cmp(array[y]))
return (y);
y++;
}
}
}
return (-1);
}
