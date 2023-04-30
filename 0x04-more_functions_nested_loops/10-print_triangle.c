#include "main.h"
/**
 * print_triangle - entry point
 * should print only a new line
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
int row, hashes, spaces;
if (size <= 0)
{
for (row = 1; row <= size; row++)
{
for (spaces = size - row; spaces >= 1; spaces--)
{
for (hashes = 1; hashes <= row; hashes++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
}
