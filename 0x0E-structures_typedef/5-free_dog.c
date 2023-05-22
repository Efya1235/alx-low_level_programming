#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @sd: struct dog to free
 */
void free_dog(dog_t *sd)
{
	if (sd)
	{
		free(sd->name);
		free(sd->owner);
		free(sd);
	}
}
