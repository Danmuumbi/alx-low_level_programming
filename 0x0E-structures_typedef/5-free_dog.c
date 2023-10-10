#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees memory allocated for a dog_t structure.
* @d: Pointer to a dog_t structure to be freed.
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free memory for name and owner strings */
		free(d->name);
		free(d->owner);
		/* Free memory for the dog_t structure itself */
		free(d);
	}
}
