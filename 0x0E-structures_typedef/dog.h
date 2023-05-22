#ifndef DOG_H
#define DOG_H
/**
 * struct dog - information of a dog
 * @name: the name of a dog
 * @age: the age of a dog
 * @owner: the owner of a dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *spc);
int _strlen(char *s);

#endif
