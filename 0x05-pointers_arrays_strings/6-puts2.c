#include "main.h"
/**
 * puts2 - prints every other char of a string
 * @str: String that starts with first char
 * Return: Always 0
 */
void puts2(char *str)
{
int a = 0;
while (str[a] != '\0')
{
if (a % 2 == 0)
{
_putchar(s(a));
}
a++;
}
_putchar('\n');
}
