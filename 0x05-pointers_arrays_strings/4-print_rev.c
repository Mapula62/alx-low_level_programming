#include "main.h"
#include <stdio.h>
/**
 * print_rev - function that prints a string in reverse
 * @s: String that prints
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
for (i -= 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
