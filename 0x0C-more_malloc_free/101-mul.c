#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * find_len - length of the string to be found
 * @str: string to be measured
 * Return: string length
 */
int find_len(char *str)
{
int len = 0;
while (*str++)
len++;
return (len);
}
/**
 * create_xarray - array of chars to be created and initializes it with 'x'
 * description: function that exits 98 if there is insufficient space
 * @sixe: array size that is initialized
 * Return: pointer to the array
 */
char *create_xarray(int size)
{
int index;
char *array;
array = malloc(sizeof(char) * size);
if (array == NULL)
exit(98);
for (index = 0; index < (size - 1); index++)
array[index] = 'x';
array[index] = '\0';
return (array);
}
/**
 * iterate_zeroes - a string of numbers containing leading zeroes
 * @str: string of numbers to be iterated
 * Return: pointer to the non-zero input
 */
char *iterate_zeroes(char *str)
{
while (*str && *str == '0')
str++;
return (str);
}
/**
 * get_digit - digit char to be converted to a correspponding int
 * description - function that exits 98 if c is a non-digit
 * @c: char to be converted
 * Return: convetrted int
 */
int get_digit(char c)
{
int digit = c - '0';
if (digit < 0 || digit > 9)
{
printf("Error\n");
exit(98);
}
return (digit);
}
/**
 * get_prod - number of string to be multiplied by a single digit
 * decription: function that exits 98
 * @prod: buffer that stores the result
 * @mult: numbers of strings
 * @digit: single digit
 * @zeroes: number of leading zeroes
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
int mult_len, num, tens = 0;
mult_len = find_len(mult) - 1;
mult += mult_len;
while (*prod)
{
*prod = 'x';
prod++;
}
prod--;
while (zeroes--)
{
*prod = '0';
prod--;
}
for (; mult_len >= 0; mult_len--, mult--, prod--)
{
if (*mult < '0' || *mult > '9')
{
printf("Error\n");
exit(98);
}
num = (*mult - '0') * digit;
num += tens;
*prod = (num % 10) + '0';
tens = num / 10;
}
if (tens)
*prod = (tens % 10) + '0';
}
/**
 * @add_nums - string numbers to be stored
 * @last_prod: buffer stores final product
 * @first_prod: first product added
 * @next_len: length of next_prod
 */
void add_nums(char *last_prod, char *first_prod, int next_len)
{
int num, tens = 0;
while (*(last_prod + 1))
last_prod++;
while (*(first_prod + 1))
first_prod++;
for (; *last_prod != 'x'; last_prod--)
{
num = (*last_prod - '0') + (*first_prod - '0');
num += tens;
*last_prod = (num % 10) + '0';
tens = num / 10;
first_prod--;
next_len--;
}
for (; next_len >= 0 && *first_prod != 'x'; next_len--)
{
num = (*first_prod - '0');
num += tens;
*last_prod = (num % 10) + '0';
tens = num / 10;
last_prod--;
first_prod--;
}
if (tens)
*last_prod = (tens % 10) + '0';
/**
 * main - positive numbers to be miltiplied
 * description: creates a num of arguments that exits with 98
 * @argv: number of arguments
 * @argc: pointers an array to arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int size, index, digit, zeroes = 0;
char *last_prod, *first_prod;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
if (*(argv[1]) == '0')
argv[1] = iterate_zeroes(argv[1]);
if (*(argv[2]) == '0')
argv[2] = iterate_zeroes(argv[2]);
if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
{
printf("0\n");
return (0);
}
else
size = find_len(argv[1]) + find_len(argv[2]);
last_prod = create_xarray(size + 1);
first_prod = create_xarray(size + 1);
for (index = find_len(argv[2]) - 1; index >= 0; index--)
{
digit = get_digit(*(argv[2] + index));
get_prod(first_prod, argv[1], digit, zeroes++);
add_nums(last_prod, first_prod, size - 1);
}
for (index = 0; last_prod[index]; index++)
{
if (last_prod[index] != 'x')
putchar(last_prod[index]);
}
putchar('\n');
free(first_prod);
free(last_prod);
return (0);
}
