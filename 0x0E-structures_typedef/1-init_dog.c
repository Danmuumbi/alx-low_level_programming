#include "dog.h"
#include <stddef.h>

/**
* init_dog - Initialize a variable of type struct dog
* @d: Pointer to a struct dog
* @name: Name to initialize
* @age: Age to initialize
* @owner: Owner to initialize *
* Description: This function initializes the members of a struct dog.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
