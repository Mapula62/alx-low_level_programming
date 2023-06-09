#include "main.h"
/**
 * _pow_recursion - returns the value of x to the power of y
 * @x: value of the number
 * @y: value to the power
 * Return: x to y
 * -1 if x < 0.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
if (y == 1)
return (x);
return (x * _pow_recursion(x, y - 1));
}
