#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: String pointer destination
 * @src: String pointer source
 * @n: num of bytes to be concatenated
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int l;
i = 0;
while (dest[i] != '\0')
{
i++;
}
l = 0;
while (l < n && src[l] != '\0')
{
dest[i] = src[l];
i++;
l++;
}
dest[i] = '\0';
return (dest);
}
