#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: a duplicate of the string
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
char *aaa;
int a, b = 0;
if (str == NULL)
return (NULL);
a = 0;
while (str[a] != '\0')
a++;
aaa = malloc(sizeof(char) * (a + 1));
if (aaa == NULL)
return (NULL);
for (b = 0; str[b]; b++)
aaa[b] = str[b];
return (aaa);
}
