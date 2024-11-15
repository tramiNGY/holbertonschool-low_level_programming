#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees struct dog_t variable
 * @d: struct dog_t variable
*/

void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}
