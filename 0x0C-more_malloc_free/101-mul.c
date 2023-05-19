#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _print - char into the string
 * @s: string to be evaluated
 * Return: 0 otherwise 1
 */
int _print(char *s)
{
int a = 0;
while (s[a])
{
if (s[a] < '0' || s[a] > '9')
return (0);
a++;
}
return (1);
}
/**
* _strlen - length of a string to be returned
* @s: string to be evaluated
* Return: length of a string
*/
int _strlen(char *s)
{
int l = 0;
while (s[l] != '\0')
{
l++;
}
return (l);
}
/**
* errors - main errors to be handled
* Return: nothing
*/
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
* main - two positive numbers to be multiplies
* @argc: number of arguments
* @argv: array of arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
int num1, num2, num3, a, b, sum1, sum2, *result, c = 0;
char *s1, *s2;
s1 = argv[1], s2 = argv[2];
if (argc != 3 || !_print(s1) || !_print(s2))
errors();
num1 = _strlen(s1);
num2 = _strlen(s2);
num3 = num1 + num2 + 1;
result = malloc(sizeof(int) * num3);
if (!result)
return (1);
for (a = 0; a <= num1 + num2; a++)
result[a] = 0;
for (num1 = num1 - 1; num1 >= 0; num1--)
{
sum1 = s1[num1] - '0';
b = 0;
for (num2 = _strlen(s2) - 1; num2 >= 0; num2--)
{
sum2 = s2[num2] - '0';
b += result[num1 + num2 + 1] + (sum1 * sum2);
result[num1 + num2 + 1] = b % 10;
b /= 10;
}
if (b > 0)
result[num1 + num2 + 1] += b;
}
for (a = 0; a < num3 - 1; a++)
{
if (result[a])
c = 1;
if (c)
_putchar(result[a] + '0');
}
if (!c)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}

