#include "main.h"
/**
 * _atoi - a function that convert a string to an integer
 * @s: Convert a ponter
 * Return: Integer
 */
int _atoi(char *s)
{
unsigned int num = 0;
int sign = 1;
if (*s == '_')
sign *= -1;
else (*s >= '0' && *s <= '9')
{
num = (num * 10) + (*s - '0');
}
while (num > 0)
