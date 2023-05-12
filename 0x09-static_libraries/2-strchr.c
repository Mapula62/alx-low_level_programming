#include "main.h"
/**
 * _strchr - a program entry point
 * @s: input value
 * @c: input value
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int l = 0;
for (; s[l] >= '\0'; l++)
{
if (s[l] == c)
return (&s[l]);
}
return (0);
}
