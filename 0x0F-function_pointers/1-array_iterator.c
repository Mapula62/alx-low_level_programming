#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: input array
 * @size: the size of the array
 * @action: a pointer to the function to be used
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x = 0;
if (array != NULL && action != NULL && size > 0)
{
while (x < size)
{
action(array[x]);
x++;
}
}
}
