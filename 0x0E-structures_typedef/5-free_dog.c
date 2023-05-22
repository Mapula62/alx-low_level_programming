#include <stdlib.h>
#include "main.h"
/**
 * free_dog - struct dog memory allocated to be free
 * @d: struct dog to be free
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
