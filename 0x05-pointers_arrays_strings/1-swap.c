#include "main.h"
/**
 * swap_int - a function that swaps the values of two int
 * @a: first int to be swapped
 * @b: Second int to be swapped
 * Return: 0 Always
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp;
}
