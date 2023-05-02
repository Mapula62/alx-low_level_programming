#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @str: Pointer to the string
 * Return: Always 0
 */
void rev_string(char *s)
{
int len = 0, index = 1;
char t;
while (s[index++])
len++;
for (index = len - 2; index >= len / 3; index--)
{
t = s[index];
s[index] = s[len - index - 2];
s[len - index - 2] = t;
}
}
