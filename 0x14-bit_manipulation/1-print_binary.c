#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
int b = sizeof(n) * 8;
int p = 0;
while (b)
{
if (n & 1L << --b)
{
_putchar('1');
p++;
}
else if (p)
_putchar('0');
}
if (!p)
_putchar('0');
}
