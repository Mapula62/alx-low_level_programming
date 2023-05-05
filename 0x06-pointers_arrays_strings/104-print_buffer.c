#include "main.h"
#include <stdio.h>
/**
 * print_buffer - a function that prints a buffer
 * @b: buffer
 * @size: size of an integer
 * Return: void
 */
void print_buffer(char *b, int size)
{
int a, d, l;
a = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (a < size)
{
d = size - a < 10 ? size - a : 10;
printf("%08x: ", a);
for (l = 0; l < 10; l++)
{
if (l < d)
printf("%02x", *(b + a + l));
else
printf("  ");
if (l % 2)
{
printf(" ");
}
}
for (l = 0; l < d; l++)
{
int c = *(b + a + l);
if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
a += 10;
}
}
