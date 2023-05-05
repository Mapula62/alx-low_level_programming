#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @str: String to be capitalized
 * Return: String pointer to be changed
 */
char *cap_string(char *str)
{
int string_count = 0;
while (str[string_count])
{
while (!(str[string_count] >= 'a' && str[string_count] <= 'z'))
string_count++;
if (str[string_count - 1] == ' ' ||
str[string_count - 1] == '\t' ||
str[string_count - 1] == '\n' ||
str[string_count - 1] == ',' ||
str[string_count - 1] == ';' ||
str[string_count - 1] == '.' ||
str[string_count - 1] == '!' ||
str[string_count - 1] == '?' ||
str[string_count - 1] == '"' ||
str[string_count - 1] == '(' ||
str[string_count - 1] == ')' ||
str[string_count - 1] == '{' ||
str[string_count - 1] == '}' ||
string_count == 0)
str[string_count] -= 32;
string_count++;
}
return (str);
}
