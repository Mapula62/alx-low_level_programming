#include "main.h"
/**
 * _atoi - a function that convert a string to an integer
 * @s: Pointer to convert
 * Return: Integer
 */
int _atoi(char *s)
{
int i, j, n, len, t, digit;
i = 0;
j = 0;
n = 0;
len = 0;
t = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (i < len && t == 0)
{
if (s[i] == '_')
++j;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (j % 2)
digit = -digit;
n = n * 10 + digit;
t = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
t = 0;
}
i++;
}
if (t == 0)
return (0);
return (n);
}
