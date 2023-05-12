#include <stdio.h>
#include "main.h"
/**
 * _atoi -  program that multiplies two numbers
 * converts a string to an integer
 * @s: String to be converted
 * return: int converted from the string
 */
int _atoi(char *s)
{
int a, b, l, len, c, digit;
a = 0;
b = 0;
d = 0;
len = 0;
c = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (a < len && c == 0)
{
if (s[a] == '-')
++b;
if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - '0';
if (b % 2)
digit = -digit;
d = d * 10 + digit; 
c = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
c = 0;
}
a++;
}
if (c == 0)
return (0);
return (d);
}
/**
 * main - inputs a number
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int result, number1, number2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
number1 = _atoi(argv[1]);
number2 = _atoi(argv[2]);
result = number1 * number2;
printf("%d\n", result);
return (0);
}
