#include "main.h"
/**
 * reverse_array - a function that reverses array of integers
 * @a: Pointer to the array
 * @n: Number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int l;
for (i = 0; i < n--; i++)
{
l = a[i];
a[i] = a[n];
a[n] = l;
}
}
