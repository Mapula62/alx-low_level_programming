#include "main.h"
/**
 * puts2 - function that prints every other char of a string
 * starting with the first char
 * @str: Input string
 * Return: Print
 */
void puts2(char *str)
{
int longi = 0;
int i = 0;
char *j = str;
int n;
while (*j != '\0')
{
j++;
longi++;
}
i = longi - 1;
for (n = 0; n <= i; n++)
{
if (n % 2 == 0)
{
_putchar(str[n]);
}
}
_putchar('\n');
}
