#include "main.h"
/**
 * _strncpy - a string to be copied
 * @dest: input string
 * @src: input string
 * @n: input string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int y;
y = 0;
while (y < n && src[y] != '\0')
{
dest[y] = src[y];
y++;
}
while (y < n)
{
dest[y] = '\0';
y++;
}
return (dest);
}
