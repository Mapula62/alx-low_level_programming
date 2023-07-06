#include "main.h"
#include <stdlib.h>
/**
 * flip_bits - returns the number of bits needed to be flippled
 * @n: input first number
 * @m: input second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int num = 0;
unsigned long int sum = n ^ m;
while (sum)
{
if (sum & 1ul)
num++;
sum = sum >> 1;
}
return (num);
}
