#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: If n == 0, then 0 otherwise all sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int a, sum = 0;
va_list ap;
va_start(ap, n);
for (a = 0; a < n; a++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
