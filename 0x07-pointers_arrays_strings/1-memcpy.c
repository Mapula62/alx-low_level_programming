#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *Return: Changed copied memory with n byted
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int l = 0;
int i = n;
for (; l < i; l++)
{
dest[l] = src[l];
n--;
}
return (dest);
}
