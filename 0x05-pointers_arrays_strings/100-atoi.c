#include "main.h"
/**
 * _atoi - a function that convert a string to an integer
 * @s: Convert a ponter
 * Return: Integer
 */
int _atoi(char *s)
{

int a, b, n, len, j, digit;
a = 0;
b = 0;
n = 0;
len = 0;
j = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (a < len && j == 0)
{
if (s[a] == '_')
++b;
if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - '0';
if (b % 2)
digit = -digit;
n = n * 10 + digit;
j = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
j = 0;
}
a++;
}
if (j == 0)
return (0);
return (n);
}
