#include "main.h"
#include "main.h"
#include "main.h"
/**
*puts_half - a function that prints half of a string
*@str: String to be printed
*Return: void
*/
void puts_half(char *str)
{
int b = 0;
int c;
while (str[b] != '\0')
{
b++;
}
if (b % 2 == 1)
{
c = (b - 1) / 2;
c += 1;
}
else 
{
c = b / 2;
}
for (; c < b; c++)
}
