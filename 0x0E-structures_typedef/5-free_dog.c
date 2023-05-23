#include <stdlib.h>
#include "main.h"
/**
 * free_dog - frees dog
 * @d: struct dog to be free
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->owner);
free(d->name);
free(d);
}
