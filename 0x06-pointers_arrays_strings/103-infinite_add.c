#include "main.h"
/**
 * infinite_add -  a function that adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the result
 * @size_r: the result of a length
 * Return: sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
/*local variable declaration */
int length = 0, i = 0, j = 0, d = 0;
int f = 0, l = 0, s = 0;
while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
j++;
i--;
j--;
if (j >= size_r || i >= size_r)
return (0);
while (j >= 0 || i >= 0 || length == 1)
{
if (i < 0)
f = 0;
else
f = *(n1 + i) -'0';
if (j < 0)
l = 0;
else
l = *(n2 + j) -'0';
s = f + l + length;
if (s >= 10)
length = 1;
else
length = 0;
if (d >= (size_r - 1))
return (0);
*(r + d) = (s % 10) + '0';
d++;
j--;
i--;
}
if (d == size_r)
return (0);
*(r + d) = '\0';
return (r);
}
