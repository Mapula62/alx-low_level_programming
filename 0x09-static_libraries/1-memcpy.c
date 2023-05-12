#include "main.h"
/**
 *_memcpy - function that copies memory area
 *@dest: where memory is stored
 *@src: where memory is copied
 *@n: number of bytes
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int f = 0;
int k = n;
for (; f < k; f++)
{
dest[f] = src[f];
n--;
}
return (dest);
}
