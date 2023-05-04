#include "main.h"
/**
 * string_toupper - function that changes all lowercase to uppercase
 * @n: String to the pointer
 * Return: Pointer to the uppercase string
 */
char *string_toupper(char *n)
{
int j;
j = 0;
while (n[j] != '\0')
{
if (n[j] >= 'a' && n[j] <= 'z')
n[j] = n[j] - 32;
j++;
}
return (n);
}
