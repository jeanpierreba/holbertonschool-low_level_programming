#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the dogs
 * @d: structure of the dogs
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
