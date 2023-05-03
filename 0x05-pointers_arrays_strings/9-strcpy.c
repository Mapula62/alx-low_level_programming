#include "main.h"
/**
 * _strcpy - a function that copies the string
 * @dest: Value destination
 * @src: Value source
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int v;
for (v = 0; src[v] != '\0'; v++)
{
dest[v] = src[v];
}
dest[v++] = '\0';
return (dest);
}
