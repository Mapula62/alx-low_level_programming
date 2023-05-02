#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: String that prints
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
int begin = 0;
while (s[begin])
begin++;
while (begin--)
_putchar(s[begin]);
_putchar('\n');
}
