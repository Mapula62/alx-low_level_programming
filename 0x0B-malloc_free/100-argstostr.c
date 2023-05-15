#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int ch = 0, a = 0, b = 0, d = 0;
char *s;
if (ac == 0 || av == NULL)
return (NULL);
while (a < ac)
{
while (av[a][b])
{
ch++;
b++;
}
b = 0;
a++;
}
s = malloc((sizeof(char) * ch) + ac +1);
a = 0;
while (av[a])
{
while (av[a][b])
{
s[d] = '\n';
b = 0;
d++;
a++;
}
d++;
s[d] = '\0';
return (s);
}
