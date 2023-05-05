#include "main.h"
#include <stdio.h>
/**
 * rot13 - a function that encodes a string using rot13
 * @s: String pointer to params
 * Return: *s
 */
char *rot13(char *s)
{
int j;
int i;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (j = 0; s[j] != '\0'; j++)
{
for (i = 0; i < 52; i++)
{
if (s[j] == data1[i])
{
s[j] = datarot[i];
break;
}
}
}
return (s);
}
