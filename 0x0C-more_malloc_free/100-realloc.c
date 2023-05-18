#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - a function that reallocates a memory block
 * @ptr: input memory block
 * @old_size: input memory block
 * @new_size: reallocate memory block
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int a;
char *nptr;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);
return (nptr);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);
for (a = 0; a < old_size && a < new_size; a++)
{
nptr[a] = ((char *) ptr)[a];
}
free(ptr);
return (nptr);
}
