#include "main.h"
/**
 * helpfunction - number of square root
 * @num: nymber of square root
 * @pSqrt: number of possible square root
 * Return: number of square root to -1 for error
 */
int helpfunction(int num, int pSqrt)
{
if ((pSqrt * pSqrt) == num)
{
return (pSqrt);
}
else
{
if ((pSqrt * pSqrt) > num)
return (-1);
else
return (helpfunction(num, pSqrt + 1));
}
}
/**
 * _sqrt_recursion - function that returns natural square root of a num * @n: num to square root
 * Return: square root n
 * -1 if n is not with natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (helpfunction(n, 0));
}
