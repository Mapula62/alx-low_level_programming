#include "main.h"
#include <stdlib.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @index: bit to be found
 * @n: input number to index
 * Return: bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
return (n >> index & 1);
}
