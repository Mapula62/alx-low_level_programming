#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @size: size of an array
 * @c: assigning a char
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int t;
if (size == 0)
return (NULL);
s = malloc(size * sizeof(char));
if (s == NULL)
return (NULL);
for (t = 0; t < size; t++)
{
s[t] = c;
}
return (s);
}
