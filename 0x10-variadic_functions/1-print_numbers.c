#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int index;
va_list numbers;
va_start(numbers, n);
for (index = 0; index < n; index++)
{
printf("%d", va_arg(numbers, int));
if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(numbers);
}
