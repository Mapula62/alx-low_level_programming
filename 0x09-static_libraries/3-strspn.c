#include "main.h"
/**
 * _strspn - a program entry point
 * @s: input value
 * @accept: input value
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int f;
while (*s)
{
for (f = 0; accept[f]; f++)
{
if (*s == accept[f])
{
n++;
break;
}
else if (accept[f + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
