#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @str: The string to be modified
 * Return: Reverse string
 */
void rev_string(char *s)
{
int len = 0, index = 0;
int s;
char tmp;
while (s[index++])
len++;
for (index = len - 1; index >= len / 2; index--)
{
tmp = s[index];
s[index] = s[len - index - 1];
s[len - index - 1] = tmp;
}
}
