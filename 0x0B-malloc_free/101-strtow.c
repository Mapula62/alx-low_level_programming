#include <stdlib.h>
#include "main.h"
/**
* strtow - a function that splits a string into words
* @s: input string
* Return: num of words
*/
int count_word(char *s)
{
int a, b, flag;
b = 0;
flag = 0;
for (a = 0; s[a] != '\0'; a++)
{
if (s[a] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
b++;
}
return (b);
}
/**
 * **strtow - string to be splits into words
 * @str: string to split
 * Return: pointer to array
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int a, b = 0, len = 0, words, l = 0, start, end;
while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
for (a = 0; a <= len; a++)
{
if (str[a] == ' ' || str[a] == '\0')
{
if (l)
{
end = a;
tmp = (char *) malloc(sizeof(char) * (l + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[b] = tmp - l;
b++;
l = 0;
}
}
else if (l++ == 0)
start = a;
}
matrix[b] = NULL;
return (matrix);
}
