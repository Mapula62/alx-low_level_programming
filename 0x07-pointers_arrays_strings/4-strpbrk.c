#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input string
 * @accept: input string
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int n;
while (*s)
{
for (n = 0; accept[n]; n++)
{
if (*s == accept[n])
return (s);
}
s++;
}
return ('\0');
}
