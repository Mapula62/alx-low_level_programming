#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - string to be returned
 * @s: input string
 * Return: string
 */
int _strlen(char *s)
int j;
j = 0;
while (s[j] != '\0')
{
j++;
}
return (j);
}
/**
 * _strcpy - string to be copied pointed by spc
 * Description: terminating null byte (\0) to be buffer pointed by dest
 * @dest: input string pointer to the buffer
 * @src: copies string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *spc)
{
int a, len;
len = 0;
while (str[len] != '\0')
{
len++;
}
for (a = 0; a < len; a++)
{
dest[a] = src[a];
}
dest[a] = '\0';
return (dest);
}
/**
 * new_dog - new dog to be created
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: pointer to the dog or NULL
 */
dog_t *new_dog(char *name, float age, *owner)
{
dog_t *dog;
int len1, len2;
len1 = _strlen(name);
len2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(soizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
