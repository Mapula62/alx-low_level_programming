#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: allocates size of the memory
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
void *y;
y = malloc(b);
if (y == NULL)
exit(98);
return (y);
}
