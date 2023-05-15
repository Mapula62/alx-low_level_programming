#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat -  a function that concatenates two strings
 * @s1: concatenates first string
 * @s2: concatenate second string
 * Return: two strings
 */
char *str_concat(char *s1, char *s2)
{
int a = 0, b = 0, f = 0, t = 0;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[a])
a++;
while (s2[b])
b++;
t = a + b;
s = malloc((sizeof(char) * t) +1);
if (s == NULL)
return (NULL);
b = 0;
while (f < t)
{
if (f <= a)
s[f] = s1[f];
if (f >= a)
{
s[f] = s2[b];
b++;
}
f++;
}
s[f] = '\0';
return (s);
}
