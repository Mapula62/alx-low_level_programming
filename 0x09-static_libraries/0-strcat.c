#include "main.h"
 /**
 * _strcat - strings to be concatenated
 * @dest: input strings to the value
 * @src: input strings to the value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int a;
int b;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
