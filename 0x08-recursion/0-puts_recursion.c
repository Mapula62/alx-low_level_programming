#include "main.h"
/**
 *_puts_recursion - function that prints string followed by a new line
 *@s: String to the pointer
 *Return: Void
 */
void _puts_recursion(char *s)
{
if (*s == '\0') /* base case */
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
