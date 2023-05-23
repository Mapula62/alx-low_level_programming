#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - string to be returned
 * @s: input string
 * Return: string
 */
int _strlen(char *s)
{
int c;
c = 0;
while (s[c] != '\0')
{
c++;
}
return (c);
}
/**
 * _strcpy - string to be copied pointed by spc
 * Description: terminating null byte (\0) to be buffer pointed by dest
 * @dest: input string pointer to the buffer
 * @src: copies string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int r, len;
len = 0;
while (src[len] != '\0')
{
len++;
}
for (r = 0; r < len; r++)
{
dest[r] = src[r];
}
dest[r] = '\0';
return (dest);
}
/**
 * new_dog - new dog to be created
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: the new struct dog
 */
int doggie(char *name, float age, char *owner)
{
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
doggie = malloc(sizeof(dog_t));
if (doggie == NULL)
return (NULL);
doggie->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (doggie->name == NULL)
{
free(doggie);
return (NULL);
}
doggie->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (doggie->owner == NULL)
{
free(doggie->name);
free(doggie);
return (NULL);
}
doggie->name = _strcpy(doggie->name, name);
doggie->age = age;
doggie->owner = _strcpy(doggie->owner, owner);
return (doggie);
}
