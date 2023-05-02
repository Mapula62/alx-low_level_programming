#include "main.h"
/**
 * _puts - a function that prints a string
 * @str: String to print
 * Return: String and the new ling
 */
void _puts(char *str)
{
int s = 0;
while (str[s])
{
_puts(str[s]);
s++;
}
_putchar('\n');
}
