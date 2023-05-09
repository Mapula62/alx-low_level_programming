#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: Starting memory address
 * @b: Input value
 * @n: Number of bytes
 * Return: Array changed with new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int j = 0;
for (; n > 0; j++)
{
s[j] = b;
n--;
}
return (s);
}
