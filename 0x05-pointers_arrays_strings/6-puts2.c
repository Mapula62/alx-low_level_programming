#include "main.h"
/**
 * puts2 - prints every other char of a string
 * @str: String that starts with first char
 * Return: Print 
 */
void puts2(char *str)
{
int a = 0;
for (; str[a] != '\0'; a++)
{
if ((a % 2) == 0)
_putchar(str(a));
else
continue;
}
_putchar('\n');
}
