#include "main.h"
/**
 * print_chessboard -  a function that prints the chessboard
 * @a: array prints
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
int l;
int k;
for (l = 0; l < 8; l++)
{
for (k = 0; k < 8; k++)
_putchar(a[l][k]);
_putchar('\n');
}
}
