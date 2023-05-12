#include "main.h"
/**
 * *_memset - changed number of array into bytes
 * @s: input number
 * @b: input number
 * @n: number of bytes to be changed
 * Return: change array into n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
