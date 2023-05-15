#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: a duplicate of the string
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
int x = 0, y = 1;
char *s;
if (str == NULL)
return (NULL);
while (str[y])
{
y++;
}
s = malloc((sizeof(char) * y) +1);
if (s == NULL)
return (NULL);
while (x < y)
{
s[x] = str[x];
}
s[x] = '\0';
return (s);
}
