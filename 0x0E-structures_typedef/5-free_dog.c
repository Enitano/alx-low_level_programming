#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog memory
 * @d: caged dog in memory
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
